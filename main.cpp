#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int countFactors(int num, bool countDiff);

void zad4_1(std::vector<std::string> &nums);

void zad4_2(int &num, int &diffNum, int &factorCount, int &diffFactorCount);

int main()
{
    std::vector<std::string> nums;
    int num, diffNum, factorCount, diffFactorCount;

    zad4_1(nums);
    zad4_2(num, diffNum, factorCount, diffFactorCount);

    std::ofstream f_result("wynik4.txt");
    f_result << "4.1 " << nums.size() - 1 << " " << nums[0] << "\n";
    f_result << "4.2 " << num << " " << factorCount << " " << diffNum << " " << diffFactorCount << "\n";
    f_result.close();
}

int countFactors(int num, bool countDiff)
{
    int factorCount = 0;
    for(int i{2}; i <= sqrt(num); ++i)
    {
        if(num % i == 0)
        {
            num /= i;
            factorCount++;

            if(!countDiff)
                i--;
        }
    }
    return factorCount + 1;
}

void zad4_1(std::vector<std::string> &nums)
{
    std::ifstream f_data("liczby.txt");

    if(!f_data)
        std::cout << "Couldn't open liczby.txt\n";
    
    while (f_data.good())
    {
        std::string temp;
        f_data >> temp;
        if (temp[0] == temp[temp.length() - 1])
            nums.push_back(temp);
    }
    f_data.close();
}

void zad4_2(int &num, int &diffNum, int &factorCount, int &diffFactorCount)
{
    factorCount = diffFactorCount = 0;
    std::vector<int> nums;
    std::ifstream f_data("liczby.txt");

    if(!f_data)
        std::cout << "Couldn't open liczby.txt\n";
   
    while (f_data.good())
    {
        int temp;
        f_data >> temp;
        nums.push_back(temp);
    }
    f_data.close();

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