#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {-5,-4,-3,-2,-1};
int n = 5;
int ansArray[5];
int ind = 5;
int i = 0;
int j = n-1;
while(i<=j){
    if(abs(arr[i]) > abs(arr[j])){
        ansArray[ind] = arr[i] * arr[i];
        ind --;
        i++;
    }
    else{
        ansArray[ind] = arr[j] * arr[j];
        ind --;
        j--;
    }
}

for(int i=0;i<n;i++){
    cout<<ansArray[i]<<" ";
}
cout<<endl;

return 0;
}
