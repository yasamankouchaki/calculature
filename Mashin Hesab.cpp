#include <iostream>
#include <cmath>
using namespace std;
struct Calculator
{
    double num1,num2;
    char op;
    void input()
    {
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter operator(+,-,*,/,^):";
        cin>>op;
        cout<<"Enter second number:";
        cin>>num2;
    }
    void calculate()
    {
        switch(op)
        {
        case'+':
            cout<<"Result:"<<num1 + num2 <<endl;
            break;
        case '*':
            cout<<"Result:"<<num1 * num2 <<endl;
            break;
        case'/':
            if(num2!=0)
            {
                cout<<"Result:"<<num1/num2<<endl;
            }
            else
            {
             cout<<"Error!Division by zero."<<endl;
            }
            break;
            case'^':
            cout<<"Result:"<<pow(num1,num2)<<endl;
                break;
                    defult:
                        cout<<"Error! Invalid operator."<<endl;
        }
    }
};

int main()
{
    Calculator calc;
    calc.input();
    calc.calculate();
    return 0;
}
