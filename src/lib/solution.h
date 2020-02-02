#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  void RemoveDuplicates(std::vector<int> &input);
  void SetRemoveDuplicates(std::vector<int> &input);
  void Reversevector(std::vector<int> &input);
  void RemoveOddNum(std::vector<int> &input);
  std::vector<int> ConcatVectors(const std::vector<int> &input1, const std::vector<int> &input2);
  std::vector<int> IntersectVectors(std::vector<int> &input1, std::vector<int> &input2);
};

#endif