#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if((u*u-2*a*s)<=v*v)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
    }
	return 0;
}
