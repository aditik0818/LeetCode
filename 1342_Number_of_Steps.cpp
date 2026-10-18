
/*
LeetCode 1342: Number of Steps to Reduce a Number to Zero

Problem:
Given an integer num, return the number of steps to reduce it to zero.

Rules:
1. If num is even, divide it by 2.
2. If num is odd, subtract 1.
3. Repeat until num becomes zero.

Approach:
Use a while loop to perform the operations and
a counter to keep track of the number of steps.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {

        // Initialize the step counter
        int steps = 0;

        // Repeat until num becomes zero
        while (num > 0) {

            // Check if the number is even
            if (num % 2 == 0) {
                num = num / 2;
            }
            // If the number is odd
            else {
                num = num - 1;
            }

            // Increase the counter after each operation
            steps++;
        }

        // Return the total number of steps
        return steps;
    }
};
