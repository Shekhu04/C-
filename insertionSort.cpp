#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                //shift right
                arr[j+1] = arr[j];
            }
            else
            {
                //stop
            break;
            }
        }
        arr[j+1] = temp; //[j+1] because j ek index piche chla jata hai compare karte time
    }
    for ( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

