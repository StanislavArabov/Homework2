#include <iostream>
using namespace std;
const int SIZE=100;

void enterarray(char *arr , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}

void printarray(char *arr , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        if((arr[i]==97) || (arr[i]==101) || (arr[i]==105) ||
            (arr[i]==111) || (arr[i]==117) )
        {
            cout<<" ";
        }
        else
        {
            cout<<arr[i];
        }
    }
}
int main()
{
    int sz;
    cout<<"Enter the size of the array: "<<endl;
    cin>>sz;
    char arr[SIZE];
    enterarray(arr,sz);
    printarray(arr,sz);
    return 0;
}
