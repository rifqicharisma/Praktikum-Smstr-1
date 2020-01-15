#include <iostream>

using namespace std;

int sequential_search(string data[], int panjang, string key){
    int posisi;
    int i;
    int ketemu;

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

    string data[] = {"uranus", "neptunus", "saturnus", "jupiter", "bumi", "venus","mars", "merkurius"};
    /**
        for(int i = 0; i < 8; i++){
        cout << "Data ke-"<<i<< " : "<<data[i]<<endl;
        }

    */
    int panjang = sizeof(data)/sizeof(*data);
    string key;
    cout << "Mau cari apa : ";
    cin>>key;

    int posisi = sequential_search(data,panjang,key);
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di urutan ke-"<<posisi<<endl;
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    return 0;
}
