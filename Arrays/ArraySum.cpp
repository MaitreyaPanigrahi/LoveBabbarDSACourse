#include<bits/stdc++.h>
using namespace std;
int ArraySum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

int arr[5] = {2,7,1,-4,11};
cout<<ArraySum(arr,5)<<endl;

return 0;
}
