#include<iostream>
using namespace std;

int main(){
   
   int i = 5;
   
   //creating a reference variable
   int & j = i;

   cout << i << endl;
   i++;
   cout << i << endl; 
   j++;
   cout << i << endl;

   return 0;


}
