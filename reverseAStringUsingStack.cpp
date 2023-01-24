#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "shikhar"; //taking a string to reverse

    stack<char> s;  //Creating a string of char type

    for(int i = 0; i<str.length(); i++)  //traversing the string
    {
        char ch = str[i];
        s.push(ch);   // inserting each character of string in stack
    }

    string ans = " ";  //creating a empty string

    while(!s.empty()) //checking till stack is empty
    {
        char ch = s.top(); //taking top character from the stack
        ans.push_back(ch); //storing top character in ans 

        s.pop(); //removing the character from string
        
    }

    cout << "Answer is : "  << ans <<  endl;


    

    return 0;
}
