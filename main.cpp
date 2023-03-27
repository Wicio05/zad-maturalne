#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

template <class T>
void getData(std::vector<T> &vec);

int countFactors(int num, bool countDiff);

void zad4_1(int &size, int &num);

void zad4_2(int &num, int &diffNum, int &factorCount, int &diffFactorCount);

int main()
{
    int digits, factorNum, secondNum, diffNum, factorCount, diffFactorCount, size;

    zad4_1(size, digits);
    zad4_2(factorNum, diffNum, factorCount, diffFactorCount);

    std::ofstream f_result("wynik4.txt");
    f_result << "4.1 " << size - 1 << " " << digits << "\n";
    f_result << "4.2 " << factorNum << " " << factorCount << " " << diffNum << " " << diffFactorCount << "\n";
    f_result.close();
}

template <class T>
void getData(std::vector<T> &vec)
{
    std::ifstream f_data("liczby.txt");

    if(!f_data)
        std::cout << "Couldn't open liczby.txt\n";
    
    while (f_data.good())
    {
        T temp;
        f_data >> temp;
        vec.push_back(temp);
    }
    f_data.close();
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