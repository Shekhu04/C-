#include<iostream>
using namespace std;

int main(){
    int sidea,sideb,sidec;
    cout<<"Input three sides of triangle\n";
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral Triangle\n";
    }
    else if (sidea==sideb || sideb==sidec || sidec==sidea){
        cout<<"Isosceles Triangle\n";
    }
    else{
        cout<<"Scalene Triangle\n";
    }
    return 0;
}
