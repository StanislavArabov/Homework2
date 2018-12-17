#include <iostream>
const int SIZE=100;
using namespace std;
int fact(int number)
{
    int sum=1;
    for(int i=1;i<=number;i++)
    {
        sum=sum*i;
    }
    return sum;
}
void enterarr(int arr[SIZE] , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}
void printfact(int arr[SIZE] , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cout<<arr[i]<<"!"<<" - "<<fact(arr[i])<<endl;
    }
}
int main()
{
    int sz;
    cin>>sz;
    int arr[SIZE];
    enterarr(arr,sz);
    printfact(arr,sz);
}
