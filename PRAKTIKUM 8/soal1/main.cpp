#include <iostream>
#include <conio.h>

using namespace std;

int sequential_search(string data[], int panjang,string key){
    int posisi, i, ketemu;
    if(panjang <= 0){
        posisi = -1;
    }else{
        ketemu = 0;
        i = 0;
        while((i < panjang) && ! ketemu){
            if(data[i] == key){
                posisi = i;
                ketemu = 1;
            }else{
                i++;
            }
            if(!ketemu){
                posisi = -1;
            }
        }
    }
    return posisi;
}
int main()
{

    string data[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP",
                     "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    int panjang = sizeof(data)/sizeof(*data);
    string key;
    cout << "Cari Plat Nomor : ";
    getline(cin, key);
    int posisi = sequential_search(data,panjang,key);
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di indeks ke-"<<posisi<<endl;
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    getch();

    return 0;
}
