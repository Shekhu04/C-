#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n;
       cin>>n;
       int ans=0;
       ans=n/2;
       if(n%2==1) ans++;
       cout<<ans<<endl;
    }
}
