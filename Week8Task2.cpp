#include <iostream>
#include <cmath>
using namespace std;
double fx(double number)
{
    double sum=0;
    sum = pow(number,3) - 5*number;
    return sum;
}

double sum(double a , double b , int n)
{

    double suma=0;
    double h=(b-a)/2;
    double x=a;
    double xi=a+h;
    for(int i=0;i<=n-1;i++)
    {
        suma=suma+(h/2)*(fx(x)+fx(xi));
        x=x+h;
        xi=xi+h;
    }
    return suma;
}

int main()
{
   double a , b , h=0;
   int n;
   do
   {
       cout<<"Enter n: "<<endl;
       cin>>n;
   }
   while(n<=0);
   cout<<"Enter a: "<<endl;
   cin>>a;
   cout<<"Enter b: "<<endl;
   cin>>b;
   h=(b-a)/2;
   cout<<sum(a,b,n)<<endl;


    return 0;
}
