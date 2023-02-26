#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c) cout<<"alice"<<endl;
	   else if(b>a && b>c) cout<<"bob"<<endl;
	    else cout<<"charlie"<<endl;
	}
	return 0;
}
