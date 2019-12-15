#include <iostream>

using namespace std;

float x;
float luas(float x){
float hasil = 3.14*x*x;
return hasil;
}
float volume(float x){
float hasil = (4/3)*3.14*(x*x*x);
return hasil;
}
int main(){
    float x;
    int input;
    cout << "1. Luas"<<endl;
    cout << "2. Volume"<<endl;
    cout << "Masukkan Input : ";cin>>input;
    if(input == 1){
        cout << "Masukkan Jari-jari : ";cin>>x;
        cout << "Hasil : "<<luas(x)<<endl;
    }else{
        cout << "Masukkan Jari-jari : ";cin>>x;
        cout << "Hasil : "<<volume(x)<<endl;
    }
    return 0;
}
