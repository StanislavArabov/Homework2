#include <iostream>
using namespace std;
const int SIZE=100;

void enterarr(int *arr ,int sizeofarr)
{
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }
}
void sortarr(int *arr ,int sizeofarr)
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

void merging(int *arr1,int *arr2,int *arr3,int size1 ,int size2)
{
    for(int i=0;i<size1+size2;i++)
    {
        if((i>=0)&&(i<size1))
        {
            arr3[i]=arr1[i];
        }
        if((i>=size1)&&(i<size1+size2))
        {
            arr3[i]=arr2[i-size1];
        }
    }
}
void printarr(int *arr,int sizeofarr)
{
    for(int i=0;i<sizeofarr;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
  int sz1,sz2;
  cout<<"Enter the size of the first array: "<<endl;
  cin>>sz1;
  cout<<"Enter the size of the second array: "<<endl;
  cin>>sz2;
  int array1[SIZE],array2[SIZE];
  enterarr(array1,sz1);
  enterarr(array2,sz2);
  sortarr(array1,sz1);
  sortarr(array2,sz2);
  int array3[SIZE];
  int size3=sz1+sz2;
  merging(array1,array2,array3,sz1,sz2);
  sortarr(array3,size3);
  printarr(array3,size3);

  return 0;
}
