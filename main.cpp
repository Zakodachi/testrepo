#include "testclass.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    TestClass kevin(1, "Kevin");
    kevin.print();
    vector<int> intvect;

    for(int i = 0; i < 10; i++){
        intvect.push_back(i);
    }

    for(int i = 0; i < intvect.size(); i++){
        cout << intvect[i] << endl;
    }
    return 0;
}