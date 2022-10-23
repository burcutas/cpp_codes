//
//  main.cpp
//  adnanbihter
//
//  Created by burcupc on 17.09.2022.
//

//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <iostream>

using namespace std;

int main() {
// write your code here
int n,count=0,count1=0,count3=0;
    cin>>n;
int A[n],B[n];
for(int i=0;i<n;i++){
    cin>>A[i];
    cin>>B[i];
}

//Adnan
for(int i=0;i<n/2;i++){
    count++;
    if(A[i]>n/2){
        A[i]=count;
    }
    else if(A[i]<n/2){
        A[i]=A[i];
    }
}

for(int i=n/2;i<n;i++){
    count++;
    if(A[i]>n/2){
        A[i]=A[i];
    }
    else if(A[i]<=n/2){
        A[i]=count;
    }
}

//Bihter

for(int i=0;i<n/2;i++){
    count1++;
    if(B[i]>n/2){
        B[i]=B[i];
    }
    else if(B[i]<n/2){
        B[i]=count;
    }
}

for(int i=n/2;i<n;i++){
    count1++;
    if(B[i]>n/2 && B[i]>count1){
        B[i]=count1;
    }
    else if(B[i]<n/2 && B[i]<count1){
        B[i]=B[i];
    }
}

for(int i=0;i<n;i++){
    if(A[i]!=B[i]){
        count3++;
    }
}

cout<<count3;
    return 0;
}
