#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1,2,3};

    array<int,4> a = {5,6,7,8};
   int size = a.size();

    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout << "element at 2nd index ->" << a.at(3) << endl;
    cout << "Empty or not ->" << a.empty() << endl;
    cout << " First element ->" << a.front() << endl;
    cout << " Last element ->" << a.back() << endl;

    return 0;
}
