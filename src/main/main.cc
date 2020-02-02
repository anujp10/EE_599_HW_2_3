#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    unsigned int i = 0;
    std::vector<int> input = {1, 2, 2, 4};
    std::vector<int> input2 = {1, 2, 2, 4};
    std::vector<int> input3 = {1, 2, 2, 4};
    std::vector<int> input4 = {1, 3, 6, 8, 9};
    std::vector<int> input5 = {1, 2, 2, 4};
    std::vector<int> input6 = {1, 3, 4, 8, 9};

    std::vector<int> result = solution.ConcatVectors(input3, input4);
    std::vector<int> result1 = solution.IntersectVectors(input5, input6);
    solution.RemoveDuplicates(input);
    solution.SetRemoveDuplicates(input2);
    solution.Reversevector(input3);
    solution.RemoveOddNum(input4);
    
    std::cout << "input4: ";
    for (i = 0; i < input4.size(); i++)
        std::cout <<  input4[i] << " ";
    std::cout << std::endl;

    std::cout << "input: ";
    for (i = 0; i < input.size(); i++)
        std::cout <<  input[i] << " ";
    std::cout << std::endl;

    std::cout << "input2: ";
    for (i = 0; i < input2.size(); i++)
        std::cout <<  input2[i] << " ";
    std::cout << std::endl;

    std::cout << "input3: ";
    for (i = 0; i < input3.size(); i++)
        std::cout <<  input3[i] << " ";
    std::cout << std::endl;

    std::cout << "input4: ";
    for (i = 0; i < input4.size(); i++)
        std::cout <<  input4[i] << " ";
    std::cout << std::endl;

    std::cout << "result: ";
    for (i = 0; i < result.size(); i++)
        std::cout <<  result[i] << " ";
    std::cout << std::endl;

    std::cout << "result1: ";
    for (i = 0; i < result1.size(); i++)
        std::cout <<  result1[i] << " ";
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}