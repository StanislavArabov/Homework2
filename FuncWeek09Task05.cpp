#include <iostream>
using namespace std;
const int SIZE=100;
void entermatrix(int arr[][SIZE] , int rows , int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void numsonrow(int arr[][SIZE] , int rows , int cols)
{
    int count=0;
    int count1=0;
    for(int i=0;i<rows;i++)
    {
        count=0;
        count1=0;
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]%2==0)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        cout<<"Row "<<i<<": Odd number: "<<count1<<"Even number: "<<count<<endl;
    }
}

void numsoncol(int arr[][SIZE] , int rows , int cols)
{
    int count=0;
    int count1=0;
    for(int j=0;j<cols;j++)
    {
        count=0;
        count1=0;
        for(int i=0;i<rows;i++)
        {
            if(arr[i][j]%2==0)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        cout<<"Col "<<j<<": Odd number: "<<count1<<"Even number: "<<count<<endl;
    }
}

int main()
{
    int rows,cols;
    cout<<"Enter rows and cols: "<<endl;
    cin>>rows>>cols;
    int arr[SIZE][SIZE];
    entermatrix(arr,rows,cols);
    numsonrow(arr,rows,cols);
    numsoncol(arr,rows,cols);
    return 0;
}
