#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "ModulesTkachenko.h"

using namespace std;

string getPath(){
    return __FILE__;
}

bool isFind(string subStr, string mainStr){
    if(mainStr.find(subStr) != string::npos)
        return true;

    return false;
}

bool isCondMet(){
    return isFind(R"(\lab12\prj)", getPath());
}

bool testCase(float a, float excp, bool calc_or_edge){
    try{
        ClassLab12_Tkachenko lab = ClassLab12_Tkachenko(a);

        if(calc_or_edge == true){
            if(lab.calc_volume() == excp)
                return true;
            else
                return false;
        }
        else{
            if(lab.rtn_edge() == excp)
                return true;
            else
                return false;
        }
    }
    catch(const std::invalid_argument& e){
        return true;
    }
    catch(...){
        return false;
    }
    return false;
}

vector<float> readCases(string path){
    string line_content = "";
    vector <float> output_floats;
    std::ifstream reader;
    cout << "The path is " << path << endl;
    reader.open(path);

    if(reader.is_open() == false){
        cout << "�� ����� ������� ���� �� ����-�������." << endl;
        cout << "�������� ENTER, ��� ����� �� ��������." << endl;
        getchar();
        exit(0);
    }

    while(!reader.eof()){
        getline(reader, line_content);
        cout << "\n" << line_content << "\n";
        output_floats.push_back(stof(line_content));
    }
    reader.close();

    return output_floats;
}

void testSuite(string path_read, string path_write){
    vector<float> excp_values = readCases(path_read);;
    const float test_values[] = {0, 5, 0, -1.5, 1.5, 15, -15, 20.0, 57.0};
    const bool calc_or_edge[] = {false, true, true, false, true, false, false, true, true};
    ofstream writer (path_write);

    for(int i = 0; i < 9; i += 1){
        if(testCase(test_values[i], excp_values[i], calc_or_edge[i])){
            writer << "-------------------------\n" << "Test Case number " << i + 1 << " PASSED" << "\n-------------------------\n";
        }
        else
            writer << "-------------------------\n" << "Test Case number " << i + 1 << " FAILED" << "\n-------------------------\n";
    }

    writer.close();
}

int main()
{
    setlocale(LC_ALL, "ukr");

    if(isCondMet() == false){
        cout << "���������Ͳ ������ ������� ��������� ����������ί ������ ��������!";
        cout << "\a";
        getchar();
        exit(0);
    }

    string path_read = "";
    string path_write = "";

    cout << "������ ���� �� �����, ����� ������ ������:  ";
    cin >> path_read;
    cout << endl;

    cout << "������ ���� �� �����, ���� ������ ��������: ";
    cin >> path_write;
    cout << endl;

    testSuite(path_read, path_write);

    cout << "�������� ENTER, ��� ���������.";

    getchar();
    getchar();

    return 0;
}
