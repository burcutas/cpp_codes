//
//  main.cpp
//  hesapmakinesi
//
//  Created by burcupc on 27.07.2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int sayi1, sayi2, sonuc=0;
    char islem;
    
    cout<<"input: sayi1 islem sayi2"<< endl;
    cout<<"cikmak icin 0 x 0 yazin"<< endl;
    
    while(true){
        cin>>sayi1>>islem>>sayi2;
        switch(islem){
            case '+':
                sonuc=sayi1+sayi2;
                break;
            case '-':
                sonuc=sayi1-sayi2;
                break;
            case '*':
                sonuc=sayi1*sayi2;
                break;
            case '/':
                sonuc=sayi1/sayi2;
                break;
            case '%':
                sonuc=sayi1%sayi2;
                break;
            case 'x':
                exit(0);
                break;
            default:
                cout<<"Hatali islem girisi"<< endl;
                break;
        }
        cout<<sonuc<<endl;
    }
    return 0;
}
