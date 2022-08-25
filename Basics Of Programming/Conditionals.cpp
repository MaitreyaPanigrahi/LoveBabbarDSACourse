#include<bits/stdc++.h>
using namespace std;
int main(){

/*int a,b;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;

if(a>b){
    cout<<"A is greater"<<endl;

}
else{
    cout<<"B is greater"<<endl;
}
// if(a>0){
//     cout<<"A is Positive"<<endl;
// }
// else{
//     cout<<"A is negative"<<endl;
// }


int a;
cout<<"Enter the value of a"<<endl;
cin>>a;
if(a>0){
    cout<<"A is +ve"<<endl;
}
else if(a < 0){
    cout<<"A is -ve"<<endl;
}
else{
    cout<<"A is 0"<<endl;
}
*/

char ch;
cout<<"Enter the character"<<endl;

cin>>ch;

if(ch>='a' && ch<='z'){
    cout<<"Lower Case"<<endl;
}
else if(ch>='A' && ch<='Z'){
    cout<<"Upper Case"<<endl;

}

else if(ch>='0' && ch<='9'){
    cout<<"Numeric"<<endl;
}

else{
    cout<<"Invalid"<<endl;
}

return 0;
}
