#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b) cout<<"new phone"<<endl;
	    else if(b>a) cout<<"repair"<<endl;
	    else cout<<"any"<<endl;
	}
	return 0;
}
