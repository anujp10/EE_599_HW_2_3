#include <algorithm>
#include <set>
#include "solution.h"

void Solution::RemoveDuplicates(std::vector<int> &input) {
  
  if (input.size() == 0)
    return;

  auto end = input.end();
  for (auto it = input.begin(); it != end; it++) {
    end = std::remove(it + 1, end, *it);
  }

  input.erase(end, input.end());
}

void Solution::SetRemoveDuplicates(std::vector<int> &input) {
  std::set<int> input_set;

  if (input.size() == 0)
    return;

  auto temp_it = input.begin();
  for (auto it = input.begin(); it != input.end(); it++) {
    if (input_set.insert(*it).second) {
      *temp_it++ = *it;
    }
  }
  input.erase(temp_it, input.end());
}

void Solution::Reversevector(std::vector<int> &input) {
  if (input.size() == 0)
    return;
  
  if (input.size() % 2) {
    for (unsigned int i = 0; i < (input.size() / 2); i++)
      std::swap(input[i], input[input.size() - 1 - i]);
  }
  else {
    for (unsigned int i = 0; i < (input.size() / 2) - 1; i++)
      std::swap(input[i], input[input.size() - 1 - i]);
  }
}

void Solution::RemoveOddNum(std::vector<int> &input) {
  if (input.size() == 0)
    return;

  for (auto it = input.begin(); it != input.end(); it++) {
    if (((*it) % 2) == 1) {
      input.erase(it);
      it--;
    }
  }
}

std::vector<int> Solution::ConcatVectors(const std::vector<int> &input1, const std::vector<int> &input2) {
  std::vector<int> result;
  for (unsigned int i = 0; i < input1.size(); i++) {
    result.push_back(input1[i]);
  }
  for (unsigned int i = 0; i < input2.size(); i++) {
    result.push_back(input2[i]);
  }

  return result;
}

std::vector<int> Solution::IntersectVectors(std::vector<int> &input1, std::vector<int> &input2) {
  std::vector<int> result;

  std::sort(input1.begin(), input1.end());
  std::sort(input2.begin(), input2.end());

  std::set_intersection(input1.begin(), input1.end(), input2.begin(), input2.end(), std::back_inserter(result));

  return result;
}