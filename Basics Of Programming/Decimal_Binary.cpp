#include<bits/stdc++.h>
using namespace std;
int main(){

//--------------Decimal To Binary------------------
/*
int n;
cin>>n;
int ans = 0;
int i = 0 ;
while(n!=0){
    int bit = n & 1;
    ans = (bit * pow(10,i)) + ans;
    n = n >> 1;
    i++;
}

cout<<ans;
*/
//--------------------BINARY TO DECIMAL---------------------------
int n;
cin>>n;
int ans = 0;
int i = 0;
while(n!=0){
    int digit = n % 10;
    if(digit == 1){
        ans = ( digit * pow(2,i) ) + ans;

    }
    n = n / 10;
    i++;
}
    cout<<ans<<endl;

return 0;
}
