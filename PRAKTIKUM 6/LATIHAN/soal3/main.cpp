#include <iostream>

using namespace std;
float x, y;
float jumlah(float x, float y){
float hasil = x+y;
return hasil;
}

int kali(int x, int y){
int hasil = x*y;
}

float bagi(float x, float y){
float hasil = x/y;
return hasil;
}

int kurang(int x, int y){
int hasil = x-y;
}

float pangkat(float x, float y){
    float loop = y-1, hasil = x;
    for(int i = 1; i <= loop; i++){
        hasil = hasil*x;
    }
return hasil;
}

int main()
{
    float input, x, y;
    cout << "=====KALKULATOR=====" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Pengurangan" << endl;
    cout << "5. Pangkat" << endl;
    cout <<endl;
    cout << "Masukkan Input : ";cin>>input;

    if(input==1){
        cout << "Masukkan Bilangan Pertama : ";cin>>x;
        cout << "Masukkan Bilangan Kedua : ";cin>>y;
        cout << "Hasil : "<<jumlah(x,y)<<endl;
    }else if(input == 2){
        cout << "Masukkan Bilangan Pertama : ";cin>>x;
        cout << "Masukkan Bilangan Kedua : ";cin>>y;
        cout << "Hasil : "<<kali(x,y)<<endl;
    }else if(input == 3){
        cout << "Masukkan Bilangan Pertama : ";cin>>x;
        cout << "Masukkan Bilangan Kedua : ";cin>>y;
        cout << "Hasil : "<<bagi(x,y)<<endl;
    }else if(input == 4){
        cout << "Masukkan Bilangan Pertama : ";cin>>x;
        cout << "Masukkan Bilangan Kedua : ";cin>>y;
        cout << "Hasil : "<<kurang(x,y)<<endl;
    }else{
        cout << "Masukkan Bilangan : ";cin>>x;
        cout << "Masukkan Perpangkatan : ";cin>>y;
        cout << "Hasil : "<<pangkat(x,y)<<endl;
    }
    return 0;
}
