#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for(int i=s; i<e; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key)
{

    print(arr,s,e);
    //Base case
    //Element Not Found
    if(s>e)
    return false;

    int mid = s + (e-s)/2;

    //Element found
    if(arr[mid] == key)
    return true;

    if(arr[mid] <  key)
    return binarySearch(arr, mid+1, e, key);

    else
    return binarySearch(arr, s, mid-1, key);



}

int main(){

    int arr[6] = {2,4,6,8,10,18};
    int size = 6;
    int key = 18;

    cout << "Present or not : " << binarySearch(arr, 0, 6, key) << endl;
    return 0;
}
