#include <iostream>
using namespace std;
const int SIZE=100;
void printarr(int *arr , int sizeofarr)
{
    for(int i=sizeofarr-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int sz=5;
    int a[sz] = {1,2,3,4,5};
    printarr(a,sz);
    return 0;
}
