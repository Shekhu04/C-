#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (a[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
        }
}
if (flag){
    cout<<"Element is found\n";
}
else{
    cout<<"Element is not found\n";
}
return 0;
}
