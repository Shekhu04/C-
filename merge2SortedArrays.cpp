#include<iostream>
#include<vector>
using namespace std;

//function for merge sort
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i=0, j=0, k=0;
    while(i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
    }
    else{
        arr3[k++] = arr2[j++];
    }
    }


//copy first array element
while(i<n) {
    arr3[k++] = arr1[i++];
}

//copy second array element
while(j<m) {
    arr3[k++] = arr2[j++];

}
}

//function to print the sorted array
void print(int ans[], int n) {
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[5] = {5,8,10,23,54};
    int arr2[9] = {0,3,7,11,15,18,23,32,45};
    int arr3[14] = {0};

    merge(arr1, 5, arr2, 9, arr3);
    print(arr3, 14);

    return 0;
}
