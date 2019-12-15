#include <iostream>

using namespace std;

int main()
{
    int a;
    int jumlah;

    cout << "=====PROGRAM PENJUMLAHAN ANGKA====="<<endl;
    cout<<endl;
    cout << "Masukkan Bilangan : ";cin>>a;
    jumlah = a;
    for (int b=a; b>0; b--){
        jumlah += b-1;
        cout << b;
        if (b!=1){
             cout << " + ";
        }

    }
    cout << " = " <<jumlah;
    return 0;
}
