#include "gmock/gmock.h"
#include "StringUtil.h"

using namespace std;
using namespace testing;
using namespace stringutil;

TEST(StringUtils, HeadExtractsFirstCharacterFromString) {
    ASSERT_THAT(head("abcdef"), Eq("a"));
}

TEST(StringUtils, HeadDoesNotChangeCaseOfString) {
    ASSERT_THAT(head("fedcba"), Ne("F"));
}

TEST(StringUtils, HeadOfEmptyStringIsEmptyString) {
    ASSERT_THAT(head(""), Eq(""));
}

TEST(StringUtils, TailRemovesFirstCharacterFromString) {
    ASSERT_THAT(tail("qwerty"), Eq("werty"));
}

TEST(StringUtils, TailDoesNotChangeCaseOfString) {
    ASSERT_THAT(tail("aSdFg"), Eq("SdFg"));
}

TEST(StringUtils, TailOfEmptyStringIsEmptyString) {
    ASSERT_THAT(tail(""), Eq(""));
}

TEST(StringUtils, ZeroPadSingleCharacter) {
    ASSERT_THAT(zeroPad("A", 4), Eq("A000"));
}

TEST(StringUtils, ZeroPadTwoCharacters) {
    ASSERT_THAT(zeroPad("ab", 5), Eq("ab000"));
}

TEST(StringUtils, ZeroPadDoesNotChangeCaseOfString) {
    ASSERT_THAT(zeroPad("aBcDEFghiJKlmn", 20), Eq("aBcDEFghiJKlmn000000"));
}

TEST(StringUtils, WhenLengthOfPaddedStringLessThanStringDoNotChangeString) {
    ASSERT_THAT(zeroPad("lkij", 3), Eq("lkij"));
}

TEST(StringUtils, GetUpperCaseOfFirstLetter) {
    ASSERT_THAT(upperFront("abcd"), Eq("A"));
}