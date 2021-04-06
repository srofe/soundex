#include "gmock/gmock.h"

#include <string>

#include "CharUtil.h"

using namespace std;
using namespace testing;
using namespace charutil;

TEST(CharUtils, IsVowelForSpecificLetters) {
    ASSERT_TRUE(isVowel('A'));
}