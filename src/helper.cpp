#include <vector>
#include <iostream>
#include <cmath>

#include<helper.h>

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