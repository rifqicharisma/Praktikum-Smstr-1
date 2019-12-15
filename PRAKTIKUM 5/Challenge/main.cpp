#include <iostream>

using namespace std;

int main()
{
   int angka = 0;
    string nama;
    cout << "Berapa input\t: ";cin>> angka;

    string arara[angka];
    int panjang = sizeof(arara) / sizeof(*arara);
    cout << "\n";

    for(int i=0; i < panjang ; i ++){
        cout <<"Mahasiswa ke-"<<(i+1)<<endl;
        cout << "Masukkan nama\t: ";cin>>nama;
        arara[i]=nama;
    }

    cout << "\nNama Mahasiswa" << endl;

    for(int i =0; i < panjang; i ++){
        cout << "Mahasiswa ke-"<< (i+1) << "\t: "<< arara[i]<<endl;
    }
    return 0;
}
