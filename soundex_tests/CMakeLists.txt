project(SoundexTests)

include_directories(/Users/simon/lib/googletest/googlemock/include)
include_directories(/Users/simon/lib/googletest/googletest/include)

link_directories(/Users/simon/lib/googletest/build/lib)

set(sources
        main.cc
        SoundexTest.cc)
add_executable(test ${sources})

target_link_libraries(test gmock)
target_link_libraries(test gtest)