#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <questhandler.h>


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
