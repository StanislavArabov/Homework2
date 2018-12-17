#include <iostream>
const int SIZE=100;
using namespace std;
void tempbin(int number)
{
   int arr[64],i=0;
   for(i=0;number!=0;i++)
   {
       arr[i]=number%2;
       number=number/2;
   }
   for(int j=i-1;j>=0;j--)
   {
       cout<<arr[j];
   }
}

void enterarray(int arr[SIZE],int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}

void printarray(int arr[SIZE],int sizeoarr)
{
    for(int i=0;i<sizeoarr;i++)
    {
        cout<<arr[i]<<" - ";tempbin(arr[i]);
        cout<<endl;
    }
}
int main()
{
   int sz;
   cout<<"Enter the size of the array: "<<endl;
   cin>>sz;
   int arr[SIZE];
   enterarray(arr,sz);
   printarray(arr,sz);
   return 0;
}
