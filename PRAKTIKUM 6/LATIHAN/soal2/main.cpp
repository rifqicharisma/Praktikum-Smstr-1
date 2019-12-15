#include <iostream>

using namespace std;
float x;
float luas(float x){
float hasil = 3.14*x*x;
return hasil;
}

int main()
{
    float x;
    cout << "Masukkan Jari-jari : ";cin>>x;
    cout << "Hasil : "<<luas(x)<<endl;
    return 0;
}
