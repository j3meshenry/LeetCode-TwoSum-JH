/*

File: LCTwoSum.cpp
Author: James Henry
Date: 02/21/2025 
Functionality: Given an input array and target value, this file will take two of the 
indices and add them to match the target value 

*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){

    int n = nums.size(); // n checks the size of nums 

    // double for-loop is bad for time-complexity, but works for small inputs 
    for(int i=0; i< n; i++){ // created a for loop to check each element in the array 
        for(int j = i + 1; j < n; j++) { // Start from i+1 to avoid using the same element 
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return the indices
            }
        }  
    }
    return{};
}

// this function is where we can modify the input array 
int main() {
    vector<int> nums = {2, 7, 11, 15}; // Modify this for different test cases
    int target = 9;
    
    cout << "Target = " << target << endl; // Display the target value
    
    vector<int> result = twoSum(nums, target);
    
    if (result.empty()) {
        cout << "No valid pair found for the target." << endl; // Handle no solution case
    } else {
        cout << "Sum is: " << result[0] << ", " << result[1] << endl;
    }
    
    return 0;
}