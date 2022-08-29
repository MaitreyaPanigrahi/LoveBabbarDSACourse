#include<bits/stdc++.h>
using namespace std;
int main(){

/*int n;
cin>>n;

int i = 1;
while(i<=n){
    cout<<i<<" ";
    i = i+ 1;
}


int n;
cin>>n;

int sum = 0;
int i = 1;
while(i<=n){
    sum = sum + i;
    i = i+1;
}

cout<<sum;


int n;
cin>>n;
int i =2;
int sum = 0;
while(i<=n){
    sum = sum + i;
    i = i + 2;
}
cout<<sum;


int n;
cin>>n;
int i = 2;
while(i<n){
    if(n % i == 0){
        cout<<"Not prime for "<<i<<endl;
    }
    else{
        cout<<" Prime for "<<i<<endl;
    }
    i = i + 1;
}

 //----------------PATTERN 1 --------------------
int n;;
cin>>n;

int i = 1;
int j = 1;

while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<"*"<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}


//----------------------PATTERN 2--------------------
int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<i<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}


// -------------------PATTERN 3 -------------------------------
int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<j<<" ";
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}


int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;

}


//-----------------PATTERN 4 --------------------------
int n;
cin>>n;
int i =1;
int count = 1;
while(i<=n){
    
    int j = 1;
    while(j<=n){
        
        cout<<count<<" ";
        count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

//-------------------PATTERN 5--------------------------

int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<'*'<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;

}

//-------------------PATTERN 6 --------------------------
int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<i<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}


// --------------------PATTERN 7---------------------------

int n;
cin>>n;
int i = 1;
int count = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<count<<" ";
        count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

// --------------------PATTERN 8---------------------------

int n;
cin>>n;
int i = 1;
while(i<=n){
    // int count = i;
    int j = 1;
    while(j<=i){
        cout<<i + j - 1<<" ";
        // count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

// --------------------PATTERN 9---------------------------

int n;
cin>>n;
int i = 1;
while(i<=n){
    // int count = i;
    int j = 1;
    while(j<=i){
        cout<<i - j + 1<<" ";
        // count = count - 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}


// --------------------PATTERN 10---------------------------

int n;
cin>>n;
int i = 1;
char ch  = 'A';
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<ch<<" ";
        j = j + 1;
    }
    cout<<endl;
    ch = ch + 1;
    i = i + 1;
}




//-----------------------PATTERN 11-------------------

int n;
cin>>n;
int i = 1;
while(i<=n){
    char ch = 'A';
    int j = 1;
    while(j<=n){
        cout<<ch<<" ";
        j = j + 1;
        ch = ch + 1;
    }
    cout<<endl;
    // ch = ch + 1;
    i = i + 1;
}


//------------------PATTERN 12--------------------------

int n;
cin>>n;
int i = 1;
char ch = 'A';
while(i<=n){
    
    int j = 1;
    while(j<=n){
        cout<<ch<<" ";
        j = j + 1;
        ch = ch + 1;
    }
    cout<<endl;
    i = i + 1;
}
*/

//------------------PATTERN 13-----------------------
int n;
cin>>n;
int i = 1;
// char ch = 'A';
while(i<=n){
    
    int j = 1;
    while(j<=n){
        char ch = 'A' + i + j - 2;
        cout<<ch<<" ";
        j = j + 1;
    
    }
    cout<<endl;
    i = i + 1;
}

return 0;
}
