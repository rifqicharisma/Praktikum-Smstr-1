#include <iostream>

using namespace std;

int binnary_search(int data[], int panjang, int key){
    int awal, tengah, akhir, posisi;
    awal = 0;
    akhir = panjang-1;
    posisi = -1;
    while(awal <= akhir){
        tengah = (awal + akhir)/2;
        if(key == data[tengah]){
            posisi = tengah;
            break;
        }
        if(key < data[tengah]){
            akhir = tengah-1;
        }
        if(key > data[tengah]){
            awal = tengah+1;
        }
    }
    return posisi;
}

int main()
{
    int key;
    int data[] = {1,2,3,4,5,6,7,8,9};
    int panjang = sizeof(data)/sizeof(*data);
    cout << "Mau Cari Apa : ";cin>>key;
    int posisi = binnary_search(data, panjang, key);
    if(posisi != -1){
        cout << "Key "<<key<< " ada di indeks "<<posisi<<endl;
    }else{
        cout << "Key tidak ditemukan !"<<endl;
    }

    return 0;
}
