// LargestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <size_t n>

float calculateLargestNum(int (&nums)[n]) {
    int max = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int main()
{
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int nums2[] = { 4, -1, 0, 2 };
    int nums3[] = { 0 };
    int nums4[] = { 0, 1 };
    int nums5[] = { 10, 9, 7, 1 };
    int nums6[] = { -1 };

    std::cout << calculateLargestNum(nums) << '\n';
    std::cout << calculateLargestNum(nums2) << '\n';
    std::cout << calculateLargestNum(nums3) << '\n';
    std::cout << calculateLargestNum(nums4) << '\n';
    std::cout << calculateLargestNum(nums5) << '\n';
    std::cout << calculateLargestNum(nums6) << '\n';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
