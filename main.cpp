#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

typedef struct 
{
    std::vector<int> factors;
    int matchingNumsCount = 0;
}Factors;

template <class T>
void getData(std::vector<T> &vec);

void getFactors(std::vector<Factors> &v_fac, std::vector<int> &vec);

int countFactors(int num, bool countDiff);

void zad4_1(int &size, int &num);

void zad4_2(int &num, int &diffNum, int &factorCount, int &diffFactorCount);

void zad4_3(int &triple, int &penta);

void results();

int main()
{
    results();
}

template <class T>
void getData(std::vector<T> &vec)
{
    std::ifstream f_data("przyklad.txt");

    if(!f_data.is_open())
        std::cout << "Couldn't open liczby.txt\n";
    else
        std::cout << "File good!\n";
    
    while (f_data.good())
    {
        T temp;
        f_data >> temp;
        vec.push_back(temp);
    }
    f_data.close();
}

void getFactors(std::vector<Factors> &v_fac, std::vector<int> &vec)
{
    for(int i{0}; i < vec.size(); ++i)
    {
        Factors fac;
        for(int j{2}; j < vec[i]; ++j)
        {
            if(vec[i] % j == 0)
            {
                fac.factors.push_back(j);
            }
        }
        fac.factors.push_back(vec[i]);
        v_fac.push_back(fac);
    }
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

void zad4_3(int &triple, int &penta)
{
    triple = penta = 0;
    std::vector<int> nums;
    std::vector<Factors> v_fac;
    getData(nums);
    std::cout << nums.size() << "\n";
    getFactors(v_fac, nums);

    for(int i{0}; i < v_fac.size(); ++i)
    {
        std::cout << i + 1 << ". ";
        for(int j{0}; j < v_fac[i].factors.size(); ++j)
        {
            std::cout << v_fac[i].factors[j] << " "; 
        }
        std::cout << "\n";
    }
}

void results()
{
    int digits, factorNum, secondNum, diffNum, factorCount, diffFactorCount, size, triple, penta;

    zad4_1(size, digits);
    zad4_2(factorNum, diffNum, factorCount, diffFactorCount);
    zad4_3(triple, penta);

    std::ofstream f_result("wynik4.txt");
    f_result << "4.1: " << size - 1 << " " << digits << "\n";
    f_result << "4.2: " << factorNum << " " << factorCount << " " << diffNum << " " << diffFactorCount << "\n";
    f_result << "4.3: a) " << triple << ", b) " << penta << "\n";
    f_result.close();

    std::ofstream f_result_3("trojki.txt");

    f_result_3.close();
}