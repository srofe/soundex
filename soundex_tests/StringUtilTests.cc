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

TEST(StringUtil, HeadOfEmptyStringIsEmptyString) {
    ASSERT_THAT(head(""), Eq(""));
}

TEST(StringUtil, TailRemovesFirstCharacterFromString) {
    ASSERT_THAT(tail("qwerty"), Eq("werty"));
}

TEST(StringUtil, TailDoesNotChangeCaseOfString) {
    ASSERT_THAT(tail("aSdFg"), Eq("SdFg"));
}

TEST(StringUtil, TailOfEmptyStringIsEmptyString) {
    ASSERT_THAT(tail(""), Eq(""));
}

TEST(StringUtil, ZeroPadSingleCharacter) {
    ASSERT_THAT(zeroPad("A", 4), Eq("A000"));
}