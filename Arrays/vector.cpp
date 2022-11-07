#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v;
// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(1);

// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(2);

// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.push_back(3);

// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.resize(5);
// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.resize(88);
// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;

// v.pop_back();
// v.pop_back();

// cout<<"Size : "<<v.size()<<endl;
// cout<<"Capacity : "<<v.capacity()<<endl;


//FOR LOOP
for(int i = 0;i<5;i++){
    int element;
    cin>>element;
    v.push_back(element);
    // /cin>>v[i]
}

for(int i = 0;i<5;i++){
    cout<<v[i]<<" ";
}
cout<<endl;

v.insert(v.begin() + 2 , 6);


//WHILE LOOP

int idx = 0;
while(idx<v.size()){
    cout<<v[idx]<<" ";
    idx++;
}
cout<<endl;

v.erase(v.end() - 2);
for(int i = 0;i<5;i++){
    cout<<v[i]<<" ";
}







return 0;
}
