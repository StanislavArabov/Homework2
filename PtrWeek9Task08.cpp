#include <iostream>
const int SIZE=100;
using namespace std;
void enterarr(int *arr,int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}

void sortarr(int *arr,int sizeofarr)
{
    int temp=0;
    for(int i=0;i<sizeofarr;i++)
    {
        for(int j=0;j<sizeofarr-i;j++)
        {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}

int* pointer( int *arr , int sizeofarr , int number )
{
    int *point=nullptr;
    for(int i=0;i<sizeofarr;i++)
    {
        if(arr[i]==number)
        {
            point=&arr[i];
            return point;
        }
    }
    return point;
}

int main()
{
    int size1,number;
    cin>>size1>>number;
    int arr[SIZE];
    enterarr(arr,size1);
    sortarr(arr,size1);
    cout<<*(pointer(arr , size1 , number));
    return 0;
}
