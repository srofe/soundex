#include "gmock/gmock.h"

#include <string>

#include "CharUtil.h"

using namespace std;
using namespace testing;
using namespace charutil;

TEST(CharUtils, IsVowelForSpecificLetters) {
    ASSERT_TRUE(isVowel('A'));
    ASSERT_TRUE(isVowel('E'));
    ASSERT_TRUE(isVowel('I'));
    ASSERT_TRUE(isVowel('O'));
    ASSERT_TRUE(isVowel('U'));
    ASSERT_TRUE(isVowel('Y'));
}

TEST(CharUtils, IsVowelForLowercaseLetters) {
    ASSERT_TRUE(isVowel('a'));
    ASSERT_TRUE(isVowel('e'));
    ASSERT_TRUE(isVowel('i'));
    ASSERT_TRUE(isVowel('o'));
    ASSERT_TRUE(isVowel('u'));
    ASSERT_TRUE(isVowel('y'));
}

TEST(CharUtils, ConsontantsAreNotVowels) {
    ASSERT_FALSE(isVowel('b'));
}

TEST(CharUtils, ConvertsLetterToUpperCase) {
    ASSERT_EQ(upper('a'), 'A');
}