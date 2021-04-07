#include "StringUtil.h"
#include <iostream>

namespace stringutil {
    std::string head(const std::string& word) {
        return word.substr(0, 1);
    }

    std::string tail(const std::string& word) {
        if (word.length() == 0) return "";
        return word.substr(1);
    }

    std::string zeroPad(const std::string &word, unsigned int toLength) {
        if (toLength < word.length()) return word;
        auto numberOfZerosToAdd = toLength - word.length();
        return word + std::string(numberOfZerosToAdd, '0');
    }
}
