#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0) { //int start = 0 is default argument 

    for(int i = start ; i<n ; i++){
        cout << arr[i] << endl;
    }
}

int main() {

    int arr[5] = {2,5,8,7,2};
    int size = 5;

    print(arr,size,1);

    return 0;
}
