#include <iostream>
const int SIZE=100;
using namespace std;

void enterarray(int *arr , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}

int delelement(int *arr , int sizeofarr ,int number)
{
    int count=0;
    for(int i=0;i<sizeofarr;i++)
    {
        if(arr[i]==number)
        {
            count++;
            for(int j=i;j<sizeofarr-1;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    return count;
}

bool check(int counter)
{
    if(counter!=0)
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
    int size1,number,counter=0;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size1;
    cout<<"Enter a number to be erased: "<<endl;
    cin>>number;
    int arr[SIZE];
    enterarray(arr,size1);
    counter=delelement(arr,size1,number);
    cout<<check(counter)<<endl;
    return 0;
}
