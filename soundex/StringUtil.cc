#include "StringUtil.h"

namespace stringutil {
    std::string head(const std::string& word) {
        return word.substr(0, 1);
    }
}
