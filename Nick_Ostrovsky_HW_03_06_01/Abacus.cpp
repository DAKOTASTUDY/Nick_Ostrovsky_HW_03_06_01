#include "030601Header.h"
#include <iostream>




  
    bool Abaqus::set_num1(double nn) {
        if (nn != 0) { num1 = nn; return (true); }
        else { return (false); }
    }
    bool Abaqus::set_num2(double mm) {
        if (mm != 0) { num2 = mm; return (true); }
        else { return (false); }
    }
    double Abaqus::get_num1() { return num1; }
    double Abaqus::get_num2() { return num2; }
    double Abaqus::add()
    {
        return (num2 + num1);
    }
    double Abaqus::multiply()
    {
        return (num1 * num2);
    }
    double Abaqus::substruct_1_2()
    {
        return (num1 - num2);
    }
    double Abaqus::substruct_2_1()
    {
        return (num2 - num1);
    }
    double Abaqus::divide_1_2()
    {
        return (num1 / num2);
    }
    double Abaqus::divide_2_1()
    {
        return (num2 / num1);
    }






