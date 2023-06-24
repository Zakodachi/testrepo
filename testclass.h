#ifndef testclass
#define testclass
#include<string>
using namespace std;

class TestClass{
    public:
        TestClass(int, string);
        void print() const;
    private:
        int num;
        string name;
        void setNum(int);
};

#endif