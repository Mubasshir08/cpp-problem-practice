// 268. Missing Number

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Example 1:

// Input: nums = [3,0,1]

// Output: 2

// Explanation:

// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = 0;
        int missing_num = 0;
        map <int,int> unique_num;
        for(int i : nums){
            range++;
            unique_num[i]++;
        }
        for(int i = 0; i <= range; i ++){
            unique_num[i]++;
        }
        for(auto it : unique_num){
            if(it.second < 2){
                missing_num = it.first;
            }
        }
        return missing_num;
    }
};

int main(){
    Solution sol1;
    vector <int> nums = {9,6,4,2,3,5,7,0,1};
    cout << sol1.missingNumber(nums) << endl;
    return 0;
}