//
//  main.cpp
//  pointers
//
//  Created by burcupc on 15.07.2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    cin>>num;
    
    int *pnum;
    pnum=&num;
    
    cout<<"value is "<< num << endl;
    cout<<"value's adress is "<< &num << endl;
    cout<<"----------------"<< endl;
    cout<<"with pointers:"<< endl;
    cout<<"value is "<< *pnum << endl;
    cout<<"value's adress is "<< pnum << endl;
    return 0;
}
