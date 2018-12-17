#include <iostream>
using namespace std;
void Swap(int &number , int &number1)
{
    int temp=number;
    number=number1;
    number1=temp;
    cout<<number<<" "<<number1<<endl;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    Swap(num1,num2);
    return 0;
}
