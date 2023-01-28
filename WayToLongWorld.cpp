#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k,m,t;
    cin>>n;
    string s;
 
    for(int i=0;i<n;i++)
    {
        cin>>s;
        k=s.size();
        if(k>10)
        {
        m=k-2;
        cout<<s[0]<<m<<s[k-1]<<endl;
        }
        else
        cout<<s<<endl;
    }
}
