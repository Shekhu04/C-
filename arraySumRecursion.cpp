#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
     
     //base case
     if (size == 1)
     {
        return arr[0];
     }
     else
     {
        return  arr[0] + arraySum(arr+1, size-1); //recursive call
     }
     
}

int main(){

    int arr[5] = {7,2,3,0,1};
    int size = 5;

    int ans = arraySum(arr,size);

    cout << "Sum of array is : " << ans << endl;

    return 0;

}
