#pragma once
class Abaqus
{
private:
    double num1;
    double num2;
public:
    Abaqus() : num1(1), num2(1)
    {};
    Abaqus(double num1, double num2)
    {};
    bool set_num1(double nn);
    
bool set_num2(double mm);
double get_num1();
double get_num2();
double add();
double multiply();
double substruct_1_2();
double substruct_2_1();
double divide_1_2();
double divide_2_1();

};