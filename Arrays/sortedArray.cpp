#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
for(int i=0;i<6;i++){
    int element;
    cin>>element;
    v.push_back(element);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

bool sorted = false;
for(int i=1;i<v.size()-1;i++){
    if(v[i] > v[i-1] && v[i] < v[i+1]){
        sorted = true;
    }
    else{
        sorted = false;
        break;
    }
}

if(sorted){
    cout<<"Sorted"<<endl;
}
else{
    cout<<"Not Sorted"<<endl;
}

return 0;
}
