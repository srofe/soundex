#include "CharUtil.h"

#include <string>

using namespace std;

namespace charutil {
    bool isVowel(char letter) {
        return string("aeiouy").find(tolower(letter)) != string::npos;
    }
}
