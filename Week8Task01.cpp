#include <iostream>
using namespace std;

int Abs (int number)
{
    int absolute=0;
    if(number<0)
    {
        absolute=number*(-1);
    }
    else
    {
        absolute=number;
    }
    return absolute;
}

int Pow(int base , int power)
{
    int sum=1;
    for(int i=1;i<=power;i++)
    {
        sum=sum*base;
    }
    return sum;
    if(power==0)
    {
        return sum;
    }
}

int Min(int number1 , int number2)
{
    int minimal=0;
    if(number1>number2)
    {
        minimal=number2;
    }
    else
    {
        minimal=number1;
    }
    return minimal;
}

int Max(int number1 , int number2)
{
    int maximal=0;
    if(number1>number2)
    {
        maximal=number1;
    }
    else
    {
        maximal=number2;
    }
    return maximal;
}


int minof3(int number1 , int number2 , int number3)
{
    return Min(number3,Min(number1,number2));
}

int Maxof3(int num1, int num2 , int num3)
{
    return Max(num3,Max(num1,num2));
}

bool isAlpha(char letter)
{
    if((letter>=65 && letter<=90) || (letter>=97 && letter<=122))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isDigit(char number)
{
    if((number>=48) && (number<=57))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
  int number,number1,number2;
  char symbol;
  cin>>symbol;
  cin>>number>>number1>>number2;
  cout<<Abs(number)<<endl;
  cout<<Pow(number,number1)<<endl;
  cout<<Min(number,number1)<<endl;
  cout<<Max(number,number1)<<endl;
  cout<<Max(number,number1)<<endl;
  cout<<Maxof3(number,number1,number2)<<endl;
  cout<<isAlpha(symbol)<<endl;
  cout<<isDigit(symbol)<<endl;
    return 0;
}
