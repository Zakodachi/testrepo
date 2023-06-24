#include "testclass.h"
#include<string>
#include<iostream>
using namespace std;

TestClass::TestClass(int num, string name){
    this->num = num;
    this->name = name;
}

void TestClass::setNum(int num){
    this->num = num;
}

void TestClass::print() const{
    cout << "My name is " << name << " and my number is " << num << "!" << endl;
}