#include <iostream>
const int SIZE=100;
using namespace std;
void enterarray(double *arr , int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}

int lastindex(double *arr,int sizeofarr)
{
    int index=-1;
    if(arr[sizeofarr-1]==arr[sizeofarr-2])
    {
        index=sizeofarr-1;
        return index;
    }
    if(arr[0]==arr[1])
      {
          index=0;
          return index;
      }
    for(int i=0;i<sizeofarr;i++)
    {
      if(arr[i]==(arr[i-1]+arr[i+1])/2)
      {
          index=i;
      }
    }
    return index;
}

int main()
{
    int sz;
    cout<<"Enter the size of the array: "<<endl;
    cin>>sz;
    double arr[SIZE];
    enterarray(arr , sz);
    cout<<lastindex(arr , sz);
    return 0;
}
