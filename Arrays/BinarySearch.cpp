#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    // bool present = false;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == key){
            // present = true;
            return mid;
            break;
            
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;

    
}
int main(){

int even[6] = {2,5,7,9,10,16};
int odd[5] = {6,9,13,19,21};

int evenKey = 10;
int oddKey = 13;

cout<<binarySearch(even,6,evenKey)<<endl;
cout<<binarySearch(odd,5,oddKey)<<endl;


return 0;
}
