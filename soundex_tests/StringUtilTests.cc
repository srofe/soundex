#include "gmock/gmock.h"
#include "StringUtil.h"

using namespace std;
using namespace testing;
using namespace stringutil;

TEST(StringUtils, ExtractsFirstCharacterFromString) {
    ASSERT_THAT(head("abcdef"), Eq("a"));
}