//
//  main.cpp
//  standartsapma
//
//  Created by burcupc on 3.08.2022.
//

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    int n,i,toplam=0,geneltoplam=0;
    float S,ort;
    cin>>n;
    
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        toplam+=arr[i];
    }
    ort=toplam/n;
    
    for(i=0;i<n;i++){
        geneltoplam+=pow(arr[i]-ort,2);
    }
    
    S=sqrt(geneltoplam/(n-1));
    
    cout<<S<<endl;;
    return 0;
}
