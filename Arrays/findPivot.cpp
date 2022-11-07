#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return e;
}
int main(){

int arr[9] = {10,11,3,4,5,6,7,8,9};
cout<<findPivot(arr,9)<<endl;

return 0;
}
