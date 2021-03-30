#include <string>

#ifndef SOUNDEX_H
#define SOUNDEX_H

class Soundex {
public:
    std::string encode(const std::string& word) const {
        return zeroPad(head(word) + encodedDigits(word));
    }

private:
    std::string head(const std::string& word) const {
        return word.substr(0, 1);
    }

    std::string encodedDigits(const std::string& word) const {
        if (word.length() > 1) return "1";
        return "";
    }

    std::string zeroPad(const std::string& word) const {
        auto zerosNeeded = 4 - word.length();
        return word + std::string(zerosNeeded, '0');
    }
};

#endif // SOUNDEX_H
