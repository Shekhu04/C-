/*
	Insertion Sort Algorithm
	**Time Complexity: Worst case:O(n^2)
					   Best case: O(n)
					   Average case: O(nlogn)
	**Space Complexity: O(1) //no additional space is required
*/
#include <bits/stdc++.h>
using namespace std;
 
//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 
//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	for(int i=1;i<A.size();i++){
        int temp = A[i];
        int j = i-1;
        for(; j>=0;j--){
            if(A[j]>temp){
                //shift right
                A[j+1] = A[j];
            }
            else
            {
                //stop
            break;
            }
        }
        A[j+1] = temp; //[j+1] because j ek index piche chla jata hai compare karte time
    }
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
