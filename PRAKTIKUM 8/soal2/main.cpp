#include <iostream>

using namespace std;

int binnary_search(int data[], int panjang, int key){
    int awal,tengah,akhir,posisi;
    awal = 0;
    akhir = panjang-1;
    posisi = -1;
    while(awal <= akhir){
        tengah = (awal + akhir)/2;
        if(key == data[tengah]){
            posisi = tengah;
            break;
        }else if(key < data[tengah]){
            akhir = tengah - 1;
        }else if(key > data[tengah]){
            awal = tengah + 1;
        }
    }
    return posisi;
}
int main()
{
    int data[] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007,
                  12102008, 12102009, 121020010, 121020011, 121020012, 121020013};
    int panjang = sizeof(data)/sizeof(*data);
    int key;
    cout << "CARI NIM : ";
    cin>>key;
    int posisi = binnary_search(data,panjang,key);
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di indeks ke-"<<posisi<<endl;
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    return 0;
}
