#include <iostream>
using namespace std;

int search(int mat[3][3], int n,int x)
{
    if(n==0)
    {
        return -1;
    }
    int i=0,j=n-1;
    while(i<=n && j>=0)
    {
        if(mat[i][j]==x)
        {
            cout<<"Element found at "<<i<<" "<<j<<endl;
            return 1;
        }
        else if(mat[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return -1;
}

int main()
{
    int mat[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int x=5;
    search(mat,3,x);
    return 0;
}