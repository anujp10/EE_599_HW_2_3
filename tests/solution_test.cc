#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DuplicateShould, DuplicateReturn) {
  Solution solution;
  std::vector <int> actual = {1, 2, 2, 4};
  solution.RemoveDuplicates(actual);
  std::vector<int> expected = {1, 2, 4};
  EXPECT_EQ(expected, actual);
}

TEST(DuplicateShould_1, DuplicateReturn_1) {
  Solution solution;
  std::vector <int> actual = {};
  solution.RemoveDuplicates(actual);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(DuplicateShould_2, DuplicateReturn_2) {
  Solution solution;
  std::vector <int> actual = {1, 2, 2, 4, 4, 6, 3};
  solution.RemoveDuplicates(actual);
  std::vector<int> expected = {1, 2, 4, 6, 3};
  EXPECT_EQ(expected, actual);
}

TEST(SetDuplicateShould, SetDuplicateReturn) {
  Solution solution;
  std::vector <int> actual = {1, 2, 2, 4};
  solution.SetRemoveDuplicates(actual);
  std::vector<int> expected = {1, 2, 4};
  EXPECT_EQ(expected, actual);
}

TEST(SetDuplicateShould_1, SetDuplicateReturn_1) {
  Solution solution;
  std::vector <int> actual = {};
  solution.SetRemoveDuplicates(actual);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(SetDuplicateShould_2, SetDuplicateReturn_2) {
  Solution solution;
  std::vector <int> actual = {1, 2, 2, 4, 4, 6, 3};
  solution.SetRemoveDuplicates(actual);
  std::vector<int> expected = {1, 2, 4, 6, 3};
  EXPECT_EQ(expected, actual);
}

TEST(ReverseShould, ReverseReturn) {
  Solution solution;
  std::vector <int> actual = {1, 2, 2, 4, 4, 6, 3};
  solution.Reversevector(actual);
  std::vector<int> expected = {3, 6, 4, 4, 2, 2, 1};
  EXPECT_EQ(expected, actual);
}

TEST(ReverseShould_1, ReverseReturn_1) {
  Solution solution;
  std::vector <int> actual = {1};
  solution.Reversevector(actual);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, actual);
}

TEST(ReverseShould_2, ReverseReturn_2) {
  Solution solution;
  std::vector <int> actual = {};
  solution.Reversevector(actual);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveOddShould, RemoveOddReturn) {
  Solution solution;
  std::vector <int> actual = {1, 2, 3, 4, 5};
  solution.RemoveOddNum(actual);
  std::vector<int> expected = {2, 4};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveOddShould_1, RemoveOddReturn_1) {
  Solution solution;
  std::vector <int> actual = {1, 3, 5, 7, 9};
  solution.RemoveOddNum(actual);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveOddShould_2, RemoveOddReturn_2) {
  Solution solution;
  std::vector <int> actual = {0, 2, 4, 6, 8};
  solution.RemoveOddNum(actual);
  std::vector<int> expected = {0, 2, 4, 6, 8};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveOddShould_3, RemoveOddReturn_3) {
  Solution solution;
  std::vector <int> actual = {};
  solution.RemoveOddNum(actual);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(ConcatShould, ConcatReturn) {
  Solution solution;
  std::vector <int> input1 = {1, 2, 3, 4, 5, 6};
  std::vector <int> input2 = {7, 8, 9, 10, 11, 12};
  std::vector<int> expected = solution.ConcatVectors(input1, input2);
  std::vector <int> actual = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  EXPECT_EQ(expected, actual);
}

TEST(ConcatShould_1, ConcatReturn_1) {
  Solution solution;
  std::vector <int> input1 = {1, 2, 3, 4, 5, 6};
  std::vector <int> input2 = {};
  std::vector<int> expected = solution.ConcatVectors(input1, input2);
  std::vector <int> actual = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(expected, actual);
}

TEST(ConcatShould_2, ConcatReturn_2) {
  Solution solution;
  std::vector <int> input1 = {};
  std::vector <int> input2 = {7, 8, 9, 10, 11, 12};
  std::vector<int> expected = solution.ConcatVectors(input1, input2);
  std::vector <int> actual = {7, 8, 9, 10, 11, 12};
  EXPECT_EQ(expected, actual);
}

TEST(ConcatShould_3, ConcatReturn_3) {
  Solution solution;
  std::vector <int> input1 = {};
  std::vector <int> input2 = {};
  std::vector<int> expected = solution.ConcatVectors(input1, input2);
  std::vector <int> actual = {};
  EXPECT_EQ(expected, actual);
}

TEST(IntersectShould, IntersectReturn) {
  Solution solution;
  std::vector <int> input1 = {1, 2, 4};
  std::vector <int> input2 = {2 ,4};
  std::vector<int> expected = solution.IntersectVectors(input1, input2);
  std::vector <int> actual = {2, 4};
  EXPECT_EQ(expected, actual);
}

TEST(IntersectShould_1, IntersectReturn_1) {
  Solution solution;
  std::vector <int> input1 = {1, 2, 4};
  std::vector <int> input2 = {3 ,5};
  std::vector<int> expected = solution.IntersectVectors(input1, input2);
  std::vector <int> actual = {};
  EXPECT_EQ(expected, actual);
}

TEST(IntersectShould_2, IntersectReturn_2) {
  Solution solution;
  std::vector <int> input1 = {1, 2, 2, 4};
  std::vector <int> input2 = {2, 3 ,5, 2};
  std::vector<int> expected = solution.IntersectVectors(input1, input2);
  std::vector <int> actual = {2, 2};
  EXPECT_EQ(expected, actual);
}

TEST(IntersectShould_3, IntersectReturn_3) {
  Solution solution;
  std::vector <int> input1 = {};
  std::vector <int> input2 = {};
  std::vector<int> expected = solution.IntersectVectors(input1, input2);
  std::vector <int> actual = {};
  EXPECT_EQ(expected, actual);
}