#include <iostream>

using namespace std;
//mendeklarasikan fungsi algoritma sequential search
int sequential_search(int data[], int panjang,int key){
    //mendeklarasikan variabel
    int posisi, i, ketemu;
    //melakukan percabangan
    if(panjang <= 0){
        posisi = -1;
    }else{
        ketemu = 0;
        i = 0;
        //melakukan perulangan untuk menukar nilai
        while((i < panjang) && ! ketemu){
            //jika data ditemukan
            if(data[i] == key){
                posisi = i;
                ketemu = 1;
            }else{
                i++;
            }
        //jika data tidak ditemukan
            if(!ketemu){
                posisi = -1;
            }
        }
    }
    //mengembalikan nilai posisi
    return posisi;
}

int main()
{
    //mendeklarasikan array
    int data[] = {1, 0, 3, 4, 7, 6, 11,9};
    /**
        for(int i = 0; i < 8; i++){
        cout << "Data ke-"<<i<< " : "<<data[i]<<endl;
        }

    */
    //rumus mencari panjang aray
    int panjang = sizeof(data)/sizeof(*data);
    int key;
    cout << "Mau cari apa : ";
    cin>>key;
    //memanggil fungsi pencarian
    int posisi = sequential_search(data,panjang,key);
    //jika ditemukan
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di indeks ke-"<<posisi<<endl;
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    return 0;
}
