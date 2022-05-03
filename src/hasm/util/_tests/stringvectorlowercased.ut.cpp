#include <iostream>
#include <vector>

#include "doctest.h"
#include "util/util.h"


TEST_SUITE_BEGIN("util-stringvectorlowercased");


TEST_CASE("lowercaser") {
  std::vector<std::string> strs = {
    "Hello WOrld", "APPLE", "ANOTHER STring"};

  std::vector<std::string> gotLowered = stringVectorLowerCased(strs);
  std::vector<std::string> expectedLowered = {
    "hello world", "apple", "another string"};

  CHECK_EQ(expectedLowered, gotLowered);
}


TEST_CASE("lowercaser should not modify original string") {
  std::vector<std::string> strs = {
    "Hello WOrld", "APPLE", "ANOTHER STring"};

  std::vector<std::string> gotLowered = stringVectorLowerCased(strs);

  CHECK_NE(strs, gotLowered);
}


TEST_SUITE_END();
