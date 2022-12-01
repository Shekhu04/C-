
#include<iostream>
using namespace std;

int main(){

//Null pointer and value access

/*int i = 4 ;
int *q = &i;
cout << q << endl;
cout << *q << endl;

//other way to initialize pointers
int *p = 0;
p = &i;
cout << p << endl;
cout << *p << endl;
*/

int num = 8;
int a = num;
cout << "a before :" << num << endl;
a++;
cout << "a after :" << num << endl;

int *p = &num;
cout << "before :" << num << endl;
(*p)++;
cout << "after : "<< num << endl;

//Copying a pointer
int *q = p;
cout << p << " - " << q << endl;
cout << *p << " - " << *q << endl;

//important concept
int i = 2;
int *s = &i;
(*s)++;
cout << (*s) << endl;
*s = *s + 1;
cout << *s << endl;
cout << "s before : " << s << endl;
s = s+1;
cout << "s after : " << s << endl;

return 0;
}
