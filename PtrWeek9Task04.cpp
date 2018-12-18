#include <iostream>
const int SIZE=100;
using namespace std;
void entermatrix(int arr[][SIZE],int rows , int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void print(int arr[][SIZE] , int rows ,  int cols )
{
    for(int j=0;j<cols;j++)
    {
        for(int i=0;i<rows;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int rows,cols;
    cout<<"Enter rows and cols: "<<endl;
    cin>>rows>>cols;
    int arr[SIZE][SIZE];
    entermatrix(arr,rows,cols);
    print(arr,rows,cols);

    return 0;
}
