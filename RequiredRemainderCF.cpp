#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,n;
        cin>>x>>y>>n;
        long long ans = 0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }
    }
    return 0;
}
