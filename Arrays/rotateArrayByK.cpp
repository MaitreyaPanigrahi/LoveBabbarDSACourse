#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int ansArray[5];
int n = 5;
int k = 21;
k = k%n;
int j = 0;
for(int i = n-k;i<n;i++){
    ansArray[j++] = arr[i];
}

for(int i = 0;i<n-k;i++){
    ansArray[j++] = arr[i];
}

for(int i =0;i<n;i++){
    cout<<ansArray[i]<<" ";
}
cout<<endl;


return 0;
}
