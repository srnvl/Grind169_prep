/* 

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]

 

Constraints:

    1 <= nums.length <= 104
    -2^31 <= nums[i] <= 2^31 - 1

 
Follow up: Could you minimize the total number of operations done?

*/


#include <iostream>
#include <vector>

/*class Solution {
public:
    void moveZeroes(std::vector<int>& nums) 
    {
        int left = 0; // To keep track of the next non-zero element
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] != 0)
            {
                std::swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};
*/

void moveZeroes(std::vector<int>& nums) 
{
    int left = 0; // To keep track of the next non-zero element
    for(int right = 0; right < nums.size(); right++)
    {
        if(nums[right] != 0)
        {
            std::swap(nums[left], nums[right]);
            left++;
        }
    }
}

int main()
{
    std::vector<int> nums = {0,1,0,3,12};
    // Solution solution;
    // solution.moveZeroes(nums);
    moveZeroes(nums);

    std::cout << "Result: [";
    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i];
        if(i < nums.size()-1) 
        {
            std::cout << ", ";
        }
    }

    std::cout << "]" << std::endl;

    return 0;
}