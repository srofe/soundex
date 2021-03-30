#include <string>

#ifndef SOUNDEX_H
#define SOUNDEX_H

class Soundex {
public:
    std::string encode(const std::string& word) const {
        return zeroPad(word);
    }

private:
    std::string zeroPad(const std::string& word) const {
        return word + "000";
    }
};

#endif // SOUNDEX_H
