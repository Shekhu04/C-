#include<iostream> 
using namespace std;

int power(int n){
    
    //Base case
    if(n == 0)
    return 1;

    
    else
    return 2 * power (n-1); //recursive relation
}

int main(){
    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

    return 0;
}
