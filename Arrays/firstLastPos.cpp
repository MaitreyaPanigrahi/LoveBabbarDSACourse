#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int lastOcc(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int totalOcc(int arr[],int n,int k){
    int ans = ( lastOcc(arr,n,k) - firstOcc(arr,n,k) ) + 1;

    return ans; 
}
int main(){

int arr[8] = {0,0,1,1,2,2,2,2};
int k = 2;

cout<<firstOcc(arr,8,k)<<endl;
cout<<lastOcc(arr,8,2)<<endl;

cout<<"Total occ "<<totalOcc(arr,8,k);

return 0;
}
