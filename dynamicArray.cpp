#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    //Dynamic array
    int *arr = new int[n];

    //Taking input in array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);

    cout<< "Answer is : " << ans << endl;

    return 0;
}
