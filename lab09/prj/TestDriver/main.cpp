#include <iostream>
#include "ModulesTkachenko.h"

using namespace std;

void test_binary_func()
{
    unsigned int numm[5] = {735249, 912315, 374679, 1265, 85429};
    unsigned int possibleresult[5] = {12, 15, 13, 6, 10};

    cout << ">>> Test of binary function:\n" << endl;

    for (short int i = 0; i < 5; i++)
    {
        if (binary_func(numm[i]) == possibleresult[i]){
            cout << "Test #[" << i + 1 << "]: PASSED\n";
        }
        else{
            cout << "Test #[" << i + 1 << "]: FAILED\n";
        }
    }
}
void test_bofort_score()
{
    int expected_res[5] = {4, 0, 5, 1, 1};
    float wind_power0[24] = {11.5, 7.8, 6.3, 7.0, 20.3, 8.0, 7.2, 8.6, 12.2, 15.9, 21.7, 14.8, 18.6, 8.1, 24.8, 16.6, 18.2, 21.8, 15.7, 23.6, 19.1, 18.5, 15.3, 15.6};
    float wind_power1[24] = {0.2, 6.5, 8.2, 9.5, 11.2, 11.7, 11.9, 13.5, 14.8, 0.4, 18.1, 23.5, 24.2, 24.7, 25.9, 26.7, 28.1, 28.8, 29.3, 30.8, 31.9, 32.9, 36.1, 37.2};
    float wind_power2[24] = {22.5, 33.9, 21.4, 26.0, 28.5, 34.7, 38.0, 15.0, 31.2, 32.4, 29.8, 36.4, 35.8, 35.9, 38.9, 18.5, 20.2, 24.5, 12.8, 11.5, 20.1, 9.0, 32.0, 18.1};
    float wind_power3[24] = {15.2, 32.5, 9.8, 8.5, 12.2, 6.7, 7.3, 16.5, 9.3, 32.6, 33.9, 28.7, 9.8, 20.6, 27.9, 19.5, 23.6, 18.2, 21.3, 20.1, 0.9, 8.6, 27.0, 32.4};
    float wind_power4[24] = {30.0, 4.0, 1.0, 2.5, 8.5, 2.5, 21.5, 22.5, 30.0, 21.0, 26.5, 26.0, 6.5, 36.5, 0.5, 28.5, 14.0, 24.5, 13.5, 26.0, 37.2, 23.0, 0.3, 13.3};

    cout << "\n>>> Test of Beaufort score function:\n" << endl;

    if (bal_boforta(wind_power0) == expected_res[0]){
        cout << "Test #[1]: PASSED\n";
    }
    else{
        cout << "Test #[1]: FAILED\n";
    }
    if (bal_boforta(wind_power1) == expected_res[1]){
        cout << "Test #[2]: PASSED\n";
    }
    else{
        cout << "Test #[2]: FAILED\n";
    }if (bal_boforta(wind_power2) == expected_res[2]){
        cout << "Test #[3]: PASSED\n";
    }
    else{
        cout << "Test #[3]: FAILED\n";
    }if (bal_boforta(wind_power3) == expected_res[3]){
        cout << "Test #[4]: PASSED\n";
    }
    else{
        cout << "Test #[4]: FAILED\n";
    }if (bal_boforta(wind_power4) == expected_res[4]){
        cout << "Test #[5]: PASSED\n";
    }
    else{
        cout << "Test #[5]: FAILED\n";
    }
}

void test_population_flow()
{
    int population[5] = {8543, 4550, 19500, 14596, 3495};
    int birth[5] = {35, 18, 495, 384, 13};
    int death[5] = {3, 5, 135, 98, 6};
    int emigration[5] = {230, 250, 864, 674, 35};
    int immigration[5] = {452, 300, 957, 547, 56};

    population_flow possibleres[5] = { {8733, 190}, {4587, 37}, {19233, -267}, {14183, -413}, {3509, 14} };

    cout << "\n>>> Test of population_flow function:\n" << endl;
    for (short int i = 0; i < 5; i++)
    {
        if (changes(population[i], birth[i], death[i], emigration[i], immigration[i]).population == possibleres[i].population &&
            changes(population[i], birth[i], death[i], emigration[i], immigration[i]).flow == possibleres[i].flow){
            cout << "Test #[" << i + 1 << "]: PASSED\n";
        }
        else{
            cout << "Test #[" << i + 1 << "]: FAILED\n";
        }
    }
}

int main()
{
    test_binary_func();
    test_bofort_score();
    test_population_flow();
}
