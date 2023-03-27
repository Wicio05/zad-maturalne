#include <iostream>
#include <string>
#include <vector>

#include <questhandler.h>
#include <helper.h>


void zad4_1(int &size, int &num)
{
    size = num = 0;
    std::vector<std::string> nums;
    getData(nums);

    for(int i{0}; i < nums.size(); ++i)
    {
        if(nums[i][0] == nums[i][nums[i].length() - 1])
        {
            if(num == 0)
                num = std::stoi(nums[i]);
            
            size++;
        }
    }
}

void zad4_2(int &num, int &diffNum, int &factorCount, int &diffFactorCount)
{
    factorCount = diffFactorCount = 0;
    std::vector<int> nums;
    getData(nums);

    for(int i{0}; i < nums.size(); ++i)
    {
        int temp = countFactors(nums[i], false);
        if(factorCount < temp)
        {
            factorCount = temp;
            num = nums[i];
        }

        temp = countFactors(nums[i], true);
        if(diffFactorCount < temp)
        {
            diffFactorCount = temp;
            diffNum = nums[i];
        }
    }
}