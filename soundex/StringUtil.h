#ifndef StringUtil_h
#define StringUtil_h

#include <string>

namespace stringutil {
    std::string head(const std::string& word);
    std::string tail(const std::string& word);
    std::string zeroPad(const std::string& word, unsigned int toLength);
    std::string upperFront(const std::string& word);
}

#endif // StringUtil_h
