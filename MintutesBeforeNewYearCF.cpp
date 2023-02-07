#include<iostream>
using namespace std;
int main()
{
    int t,d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if (a!=0)
        {
        d=1440-((a*60)+b);
        cout<<d<<endl;
        }
        else 
        cout<<1440-b<<endl;
    }
}
