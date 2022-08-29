#include<bits/stdc++.h>
using namespace std;



/*
int power(int a,int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}
*/ 

//----------ARITMATIC PROGRESSION--------
/*
int Ap(int n){
    int ap = (3*n) + 7;
    return ap;
}
/*

int main(){


/*
int a,b;
cin>>a>>b;
int answer = power(a,b);
cout<<answer<<endl;




int n;
cin>>n;
int ans = Ap(n);
cout<<ans;
*/


// int setBits(int n){
//     int noOfSetBits = 0;
//     while(n!=0){
//         if(n&1 == 1){
//             noOfSetBits++;
//         }
//         n= n >> 1;
//     }
//     return noOfSetBits;




// }
// int main(){
// int a = 4;
// int b = 8;

// cout<<setBits(a) + setBits(b)<<endl;

void fibonacci(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i =3;i<=n;i++){
        int c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

}
int main(){
    int n;
    cin>>n;
    fibonacci(n);

return 0;

}
