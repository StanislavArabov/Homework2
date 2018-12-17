#include <iostream>
using namespace std;
const int SIZE=100;

void printmatrix(int rows,int cols)
{
    int arr[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)
            {
                cout<<i<<" ";
            }
            if(i<j)
            {
                cout<<j-i<<" ";
            }
            if(i>j)
            {
                cout<<i*j<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[SIZE][SIZE];
    printmatrix(n,m);
}
