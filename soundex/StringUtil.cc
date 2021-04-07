#include "StringUtil.h"

namespace stringutil {
    std::string head(const std::string& word) {
        return word.substr(0, 1);
    }

    std::string tail(const std::string& word) {
        if (word.length() == 0) return "";
        return word.substr(1);
    }

    std::string zeroPad(const std::string& word, unsigned int toLength) {
        return word + std::string(3, '0');
    }
}
