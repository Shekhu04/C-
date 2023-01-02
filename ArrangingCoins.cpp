#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    int a;

    for(int i=1;i<=n;i++)
    {
        sum = sum +i;
        a = i;
        if (sum>n)
        break;
    }
    cout<<a-1<<endl;
    return 0;

}
