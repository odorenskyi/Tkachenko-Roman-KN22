#include <iostream>
#include <cmath>
#include "ModulesTkachenko.h"

#define ARRAY_SIZE 7

using namespace std;

int main() {
    const float x[ARRAY_SIZE] = {-4, 6, 3,   -1, 8,   -6,  -0.4};
    const float y[ARRAY_SIZE] = {2, -8, 0.3, 5, 13,   15, 12};
    const float z[ARRAY_SIZE] = {4,  2, 2.9, 5, 14.8, 1,  6.4};
    const float expectedResult[ARRAY_SIZE] = {-6.0706, -13.9307, -4.0945, 2.1709, -36.4525, 8.1546, 15.0646};

    for (short int i = 0; i < ARRAY_SIZE; i++)
        {
        const float currentReasult = round(s_calculation(x[i], y[i], z[i])*10000) / 10000;
        if (currentReasult == expectedResult[i])
            cout << "Test #" << i+1 << " - PASSED\n";
        else
            cout << "Test #" << i+1 << " - FAILED\n";
    }
}
