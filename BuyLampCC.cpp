#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        
        cout<<(k*x)+((n-k)*(min(x,y)))<<endl;
    }
	return 0;
}
