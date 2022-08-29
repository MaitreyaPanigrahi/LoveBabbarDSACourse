#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

/*
for(int i = 1;i<=n;i++){
    cout<<i<<" ";

}


  ------------ Sum of N number --------------------
int sum = 0;
for(int i = 1;i<=n;i++){
    sum = sum + i;
}
cout<<sum;


int first = 0;
int second = 1;
cout<<first<<" "<<second<<" ";
for(int i =3;i<=n;i++ ){
    int third = first + second;
    cout<<third<<" ";
    first = second;
    second = third;
}


-------------Check if a number is Prime or Not-----------

bool isPrime = true;
for(int i=2;i<n;i++){
    if(n%i == 0){
        cout<<"Not Prime"<<endl;
        isPrime = false;
        break;
    }
    
}
if(isPrime){
        cout<<"Prime"<<endl;
    }
*/

for(int i =0;i<n;i++){
     if(i == 3){
        continue;
    }
    cout<<i<<" ";
   
}

return 0;
}
