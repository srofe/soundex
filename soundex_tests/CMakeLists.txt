project(SoundexTests)

include_directories(/Users/simon/lib/googletest/googlemock/include)
include_directories(/Users/simon/lib/googletest/googletest/include)

link_directories(/Users/simon/lib/googletest/build/lib)

set(sources
        main.cc
        SoundexTest.cc
        CharUtilTest.cc
        StringUtilTests.cc)

set (testsources
        ../soundex/CharUtil.cc
        ../soundex/StringUtil.cc)

add_executable(test ${testsources} ${sources})

target_link_libraries(test gmock)
target_link_libraries(test gtest)