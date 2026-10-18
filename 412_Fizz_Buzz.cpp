
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        // Check every number from 1 to n
        for (int i = 1; i <= n; i++) {

            // Divisible by both 3 and 5
            if (i % 15 == 0) {
                ans.push_back("FizzBuzz");
            }
            // Divisible by 3
            else if (i % 3 == 0) {
                ans.push_back("Fizz");
            }
            // Divisible by 5
            else if (i % 5 == 0) {
                ans.push_back("Buzz");
            }
            // Otherwise, convert the number to a string
            else {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};
