#include <iostream>
#include <cstring>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <fstream>
#include "ModulesTkachenko.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");

    fstream file;
    string inputWords[5] = {"����� ������� ��������","˳���� ����","Help me please","����� ����������� ������","������������������� ��������"};
    string expectedOutput[5] = {"����� ������� ��������","˳����      ","HELP ME PLEASE","����� ����������� ������","                     ��������"};
    float s_calcx[5] = {7, 8, 16, 1, 9};
    float s_calcy[5] = {3, 2, 4, 5, 8};
    float s_calcz[5] = {5, 10, 7, 6, 11};
    string expres[5] = {"-31.383818", "-52.435154", "-2978.509521", "2.552058", "-82.564102"};
    int binnum[5] = {64,52,614,1632,88};
    string expbinnum[5] = {"00000000000000000000000001000000","00000000000000000000000000110100","00000000000000000000001001100110",
                            "00000000000000000000011001100000","00000000000000000000000001011000"};
    string file_name = "dOutput.txt";

    authorInfo("dOutput.txt");
    for(int i = 0; i < 5; i++){
        cout << boolalpha
             << "10 - ����� ��������� ���������� � �������� ����: "
             << authorInfo("dOutput.txt") << endl;
        cout << boolalpha
             << "10 - ����� ������ �� �������� �����: "
             << (inputWords[i].compare(inputFileTxt("dInput.txt", inputWords[i])) == 0) << endl;
        cout << boolalpha
             << "10.1 - ������� ������ � �������� ����: "
             << (expectedOutput[i].compare(language("dOutput.txt",inputWords[i])) == 0) << endl;
        cout << boolalpha
             << "10.2(2) - ������� ���� ����������� ����� �� �������� �����: "
             << article_62("dInput.txt") << endl;
        cout << boolalpha
             << "10.3(1) - ��������� ��������� ������� s_calculation �� ��������� �����: "
             <<(expres[i].compare(to_string(sCalculationInFile("dOutput.txt",s_calcx[i],s_calcy[i],s_calcz[i]))) == 0) << endl;
        cout << boolalpha
             << "10.3(2) - ��������� ��������� ������� numberBinFile �� ��������� �����: "
             << (expbinnum[i].compare(numberBinFile("dOutput.txt",binnum[i]))== 0) << endl << endl;

        _getch();
    }
    cout << "������� �������� ����� ��� - Y, ͳ - N: " << endl;
     while(true){
             switch(getch()){
             case 'Y': file.open(file_name, ios_base::out);
                       file << "";
                       file.close(); break;
             case 'N': cout << "�������� �������" << endl; break;
             default: cout << "\a"; continue;
             }
             break;
         }
    return 0;
}
