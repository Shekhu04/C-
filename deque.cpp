#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "Print d ->" << endl;
    for(int i : d){
        cout << i << " " ;
    } cout << endl;
    
    d.erase(d.begin(),d.begin()+1);
    cout << "After erase ->" << d.size() << endl;
    for(int i : d){
        cout << i << endl;
    }
    return 0;
}
