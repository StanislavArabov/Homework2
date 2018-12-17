#include <iostream>
using namespace std;

bool isPrime(int number)
{
    int count=0;
    for(int i=2;i<number/2;i++)
    {
        count++;
    }
    if(count==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool arethey(int number1 , int number2)
{
    int A=0 , B=0;
    A=bool(number1);
    B=bool(number2);
    if(A==B)
    {
        if(number1+2==number2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int number1,number2;
    cout<<"Enter A: "<<endl;
    cin>>number1;
    cout<<"Enter B: "<<endl;
    cin>>number2;
    cout<<arethey(number1,number2)<<endl;
    return 0;
}
