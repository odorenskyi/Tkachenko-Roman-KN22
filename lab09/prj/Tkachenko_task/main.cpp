#include <iostream>
#include <conio.h>
#include "ModulesTkachenko.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    int x, y, z;
    float wind_power[24];
    int population, death, birth, immigration, emigration;
    int numm;

    cout << "Hello! Program menu:" << endl
         << "d - function s_calculation" << endl
         << "j - function binary_func" << endl
         << "h - function bal_boforta" << endl
         << "g - function population_flow" << endl
         << "Press 'k', 'K', or 'к' to terminate the program." << endl;
    getchar();

    while(true) {
        cout << "Enter symbol (d/j/h/g/k/K/к): ";
        switch (getch()) {
            case 'd': cout << endl;
                      int x, y, z;
                      cout << "Enter x, y, z: ";
                      cin >> x >> y >> z;
                      cout << "Result: " << s_calculation(x, y, z) << endl;
                      break;
            case 'g': cout << endl;
                      cout << "Enter population of the region: ";
                      cin >> population;
                      cout << "Enter number of birth on the region: ";
                      cin >> birth;
                      cout << "Enter number of death cases of the region: ";
                      cin >> death;
                      cout << "Enter number of emigration cases in the region: ";
                      cin >> emigration;
                      cout << "Enter number of immigration cases in the region: ";
                      cin >> immigration;
                      cout << "Current number of population in the region: " << changes(population, birth, death, emigration, immigration).population << endl;
                      cout << "Current number of changes in the region: " << changes(population, birth, death, emigration, immigration).flow << endl;
                      cout << endl;
                      break;
            case 'h': cout << endl;
                      for(int i = 0;i<24;i++){
                        cout << "Enter wind energy in " << i+1 << " hour: ";
                        cin >> wind_power[i];
                      }
                      cout << "Beaufort score of the weakest wind power in 24 hours: " << bal_boforta(wind_power);
                      cout << endl;
                      break;
            case 'j': cout << endl;
                      cout << "Enter number in range 0 - 500700: ";
                      cin >> numm;
                      cout << "The amount of binary zeros or onces: " << binary_func(numm) << endl;
                      cout << endl;
                      break;
            case 'k': return 0; break;
            case 'K': return 0; break;
            case 'к': return 0; break;
            default: cout << "\a" << endl << endl; continue;
        }
    }
}
