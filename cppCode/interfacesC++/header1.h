// #include<iostream>

// using namespace std;

class Calculator
{
    int num1, num2;
    public:
        Calculator(){};
        Calculator(int x, int y): num1(x), num2(y){std::cout<<"Parameterized Constructor called"<<std::endl;};
        Calculator(const Calculator &copy): num1(copy.num1), num2(copy.num2){std::cout<<"Copy Constructor Called"<<std::endl;};
        ~Calculator(){std::cout<<"Destructor Called!"<<std::endl;};
        void setVals(int x, int y);
        void getVals();
        void add();
        void sub();
        void mul();
        void div();
};