//
//  main.cpp
//  findmaxandmin
//
//  Created by burcupc on 27.07.2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num1,num2,max,min;
    
    cout<<"enter two number:"<<endl;
    cin>>num1>>num2;
    
    if(num1>=num2){
        max=num1;
        min=num2;
    }
    else if(num2>num1){
        max=num2;
        min=num1;
    }
    
    cout<<"max number:"<<max<<endl;
    cout<<"min number:"<<min<<endl;

    return 0;
}
