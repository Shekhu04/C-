// Write a code for matrix search where all elements of the matrix are sorted
#include<iostream>
using namespace std;

int main()
{
cout<<"Enter number of rows and columns of the matrix:\n";
int n,m;
cin>>n>>m;

cout<<"Enter the target element:\n";
int target;
cin>>target;

cout<<"Enter matrix elements:\n";
int mat[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    cin>>mat[i][j];
}

//Top right corner
int r=0,c=m-1;
bool found = false;
//matrix search
while(r<n and c>=0)
{
    if( mat[r][c]==target)
    {
    found=true;
    }
    if(mat[r][c] > target)
    {
        c--;
    }
    else
    {
        r++;
    }
}
if(found)
   cout<<"Element found \n"<<endl;
else{
    cout<<"Element does not exist";
}
return 0;
}
