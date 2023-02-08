#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>5)
    {
        if(x%5!=0)
        {
            cout<<(x/5)+1<<endl;
        }
        else 
        cout<<x/5<<endl;
    }
    else cout<<"1"<<endl;
}
