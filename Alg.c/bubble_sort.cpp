//
// Created by JimCy on 2019-01-15.
//

#include "../Alg.h/bubble_sort.h"


bubble_sort::bubble_sort() {
    std::vector<int> nums;
    nums.push_back(12);
    nums.push_back(17);
    nums.push_back(98);
    nums.push_back(45);
    nums.push_back(63);
    nums.push_back(74);
    nums.push_back(22);
    nums.push_back(83);

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << ",";
    }

    std::cout << std::endl;
    nums = this->getBubbleSort(nums);

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << ",";
    }
}

std::vector<int> bubble_sort::getBubbleSort(std::vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            int min = nums[i] > nums[j] ? nums[j] : nums[i];
            int max = nums[i] > nums[j] ? nums[i] : nums[j];
            nums[i] = max;
            nums[j] = min;
        }
    }
    return nums;
}