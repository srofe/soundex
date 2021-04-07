#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>
#include <unordered_map>
#include "CharUtil.h"
#include "StringUtil.h"

class Soundex {
public:
    std::string encode(const std::string& word) const {
        return zeroPad(upperFront(stringutil::head(word)) + tail(encodedDigits(word)));
    }

    std::string encodedDigit(char letter) const {
        const std::unordered_map<char, std::string> encodings {
                {'b', "1"}, {'f', "1"}, {'p', "1"}, {'v', "1"},
                {'c', "2"}, {'g', "2"}, {'j', "2"}, {'k', "2"},
                {'q', "2"}, {'s', "2"}, {'x', "2"}, {'z', "2"},
                {'d', "3"}, {'t', "3"},
                {'l', "4"},
                {'m', "5"}, {'n', "5"},
                {'r', "6"},
        };
        auto digit = encodings.find(charutil::lower(letter));
        return digit == encodings.end() ? NotADigit : digit->second;
    }

private:
    static const size_t MaxCodeLength{4};
    const std::string NotADigit{"*"};

    std::string tail(const std::string& word) const {
        return word.substr(1);
    }

    std::string upperFront(const std::string& string) const {
        return std::string(1, charutil::upper(string.front()));
    }

    std::string encodedDigits(const std::string& word) const {
        std::string encoding;
        encodeHead(encoding, word);
        encodeTail(encoding, word);
        return encoding;
    }

    void encodeHead(std::string& encoding, const std::string& word) const {
        encoding += encodedDigit(word.front());
    }

    void encodeTail(std::string& encoding, const std::string &word) const {
        for (auto i = 1u; i < word.length(); i++)
            if (!isComplete(encoding))
                encodeLetter(encoding, word[i],  word[i-1]);
    }

    void encodeLetter(std::string& encoding, char letter, char lastLetter) const {
        auto digit = encodedDigit(letter);
        if (digit != NotADigit && (digit != lastDigit(encoding) || charutil::isVowel(lastLetter)))
            encoding += digit;
    }

    std::string lastDigit(const std::string& encoding) const {
        if (encoding.empty()) return NotADigit;
        return std::string(1, encoding.back());
    }

    bool isComplete(const std::string& encoding) const {
        return encoding.length() == MaxCodeLength;
    }

    std::string zeroPad(const std::string& word) const {
        auto zerosNeeded = MaxCodeLength - word.length();
        return word + std::string(zerosNeeded, '0');
    }
};

#endif // SOUNDEX_H
