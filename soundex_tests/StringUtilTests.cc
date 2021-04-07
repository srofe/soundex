#include "gmock/gmock.h"
#include "StringUtil.h"

using namespace std;
using namespace testing;
using namespace stringutil;

TEST(StringUtils, HeadExtractsFirstCharacterFromString) {
    ASSERT_THAT(head("abcdef"), Eq("a"));
}

TEST(StringUtils, ExtractedCharacterMaintainsCase) {
    ASSERT_THAT(head("fedcba"), Ne("F"));
}

TEST(StringUtil, HeadOfEmptyStringIsEmptyString) {
    ASSERT_THAT(head(""), Eq(""));
}

TEST(StringUtil, TailRemovesFirstCharacterFromString) {
    ASSERT_THAT(tail("qwerty"), Eq("werty"));
}