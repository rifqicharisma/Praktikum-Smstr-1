#include <iostream>

using namespace std;

int main()
{
    int l,p,t,kel,luas,vol;

    cout<< "Masukkan nilai Panjang cinta= ";
    cin>> p;

    cout<< "Masukkan nilai Lebar Cinta= ";
    cin>> l;

    cout<< "Masukkan nilai tinggi Cinta= ";
    cin>> t;

    kel= 2*(p+l);
    luas= p*l;

    if (t>0){

        vol= p*l*t;

        cout<< "Maka Volume Cintamu adalah: " <<vol <<endl;
    }

    cout<< "Maka Keliling Cintamu adalah: " <<kel <<endl;
    cout<< "Maka Luas Cintamu adalah: " <<luas <<endl;
    return 0;
}
