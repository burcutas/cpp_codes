//
//  main.cpp
//  evenoddnumbers
//
//  Created by burcupc on 27.07.2022.
//
#include <iostream>
using namespace std;


void findEvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int num,i;
    cout<<"enter a number:"<<endl;
    cin>>num;
    
    for(i=1;i<=num;i++){
        findEvenOdd(i);
    }
    
    return 0;
}
