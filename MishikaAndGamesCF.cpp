#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0,d=0,e=0;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y) c++;
        else if(y>x) d++;
        else e++;
    }
if(c>d) cout<<"Mishka"<<endl;
else if(d>c) cout<<"Chris"<<endl;
else cout<<"Friendship is magic!^^" <<endl;
}
