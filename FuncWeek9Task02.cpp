#include <iostream>
using namespace std;
const int SIZE=100;
void enterarr(int arr[SIZE] , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}
void oddeven(int arr[SIZE],int sizeofarr)
{
    int count=0;
    int count1=0;
    for(int i=0;i<sizeofarr;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    cout<<"Even numbers are: "<<count<<endl;
    cout<<"Odd numbers are: "<<count1<<endl;

}


int main()
{

    int sz;
    cin>>sz;
    int arr[SIZE];
    enterarr(arr , sz);
    oddeven(arr , sz);
    return 0;
}
