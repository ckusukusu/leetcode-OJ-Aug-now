//
// Created by unfin on 2019/8/28.
//

#ifndef INC_8EX_LEETCODE1_H
#define INC_8EX_LEETCODE1_H

#include <iostream>
#include <vector>
using namespace std;

class Leetcode1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int second = -1;
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] == temp) {
                    a.push_back(i);
                    a.push_back(j);
                    second = j;
                    break;
                }
            }
            if(second != -1)break;

        }

        return a;
    }
};


#endif //INC_8_9月LEETCODE_LEETCODE1_H
