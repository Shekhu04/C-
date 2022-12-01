#include<iostream>
using namespace std;

int main(){
    int num = 5;
    //address operator - &

    cout<< "address of num is "<< &num<< endl;

    int *ptr = &num;

    cout << "Address is : " << ptr <<endl;
    cout << "Value is : " << *ptr << endl;

    double d = 7.9;
    double *p2 = &d;

    cout << "Address is : " << p2 <<endl;
    cout << "Value is : " << *p2 << endl;

    cout << " Size of integer : " << sizeof(num) << endl;
    cout << " size of pointer : " << sizeof(ptr) << endl;
    cout << " Size of double : "  << sizeof(d) << endl;
    


    return 0;
}
