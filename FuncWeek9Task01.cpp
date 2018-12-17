#include <iostream>
using namespace std;
const int SIZE=100;

void enteranarray( int arr[SIZE] , int sizeofarr )
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}
void opposzitearr(int arr[SIZE] , int sizeofarr)
{
    for(int i=sizeofarr-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int sz;
    cin>>sz;
    int arr[SIZE];
    enteranarray(arr , sz);
    opposzitearr(arr , sz);
    return 0;
}
