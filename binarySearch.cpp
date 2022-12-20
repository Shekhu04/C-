#include<iostream>
using namespace std;

//Creating function
int binarySearch(int arr[], int size , int key) {
    
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        
        //Move to right part
        if(key > arr[mid]) {
            start = mid + 1;
        }

        //Move to left part
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int main(){

    int even[8] = {12,14,18,20,42,78,88,92};
    int odd[7] = {1,5,9,11,15,41,59};

    int evenIndex = binarySearch(even , 8 , 18);
    cout << "Index of 18 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd , 7 , 83);
    cout << "Index of 83 is : " << oddIndex << endl;

   

   


    return 0;
}
