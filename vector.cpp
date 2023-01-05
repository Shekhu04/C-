#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; //initialise vector

    vector<int> a(5,1);//vector of size 5 with each element initialise with 1
    cout << "Print a :" << endl;
    for(int i : a){
        cout << i << " ";
    }cout << endl;

    vector<int> last(a); //copy element
    cout << "Print last :" << endl;
    for(int i : a){
        cout << i << " ";
    }cout << endl;

    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity ->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity ->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity ->" << v.capacity() << endl;

    cout << "Size ->" << v.size() << endl;

    cout << "Before pop ->" << endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout << "After pop ->" << endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    cout << "Before clear size ->"<< v.size() << endl;

    v.clear();

    cout << "After clear size ->" << v.size() << endl;

    return 0;
}
