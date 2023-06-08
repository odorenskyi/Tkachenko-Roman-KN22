#ifndef MODULESTKACHENKO_H_INCLUDED
#define MODULESTKACHENKO_H_INCLUDED

#include <string>
#include <exception>

class ClassLab12_Tkachenko{
    public:
        float calc_volume(){
            return length_edge * length_edge * length_edge;
        }

        float rtn_edge(){
            return length_edge;
        }

        ClassLab12_Tkachenko(float edge);

    private:
        float length_edge = 0;

};

ClassLab12_Tkachenko::ClassLab12_Tkachenko(float edge){
    if(edge < static_cast<float>(0))
        throw std::invalid_argument("Length will be > 0");
    length_edge = edge;
}

#endif // MODULESTKACHENKO_H_INCLUDED
