#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size) {

    //base case
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr+1, size-1); //recursive call
        return remainingPart;
    }
}

int main(){
    int arr[5] = {7,2,3,0,1};
    int size = 5;

    bool ans = isSorted(arr ,size);

    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}
