#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {1,2,3,4,5,6,7};
int evenSum = 0;
int oddSum = 0;
for(int i=0;i<7;i++){
    if(i%2 == 0){
        evenSum +=arr[i];
    }
    else{
        oddSum += arr[i];
    }
}
int diff = evenSum - oddSum;
cout<<diff<<endl;

return 0;
}
