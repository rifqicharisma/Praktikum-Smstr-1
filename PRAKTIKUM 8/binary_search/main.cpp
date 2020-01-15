#include <iostream>

using namespace std;

//karena data harus urut, maka harus disorting terlebih dahulu
//mendeklarasikan fungsi binary search
int binnary_search(int data[], int panjang, int key){
    //mendeklarasikan variabel
    int awal,tengah,akhir,posisi;
    awal = 0;
    akhir = panjang-1;
    posisi = -1;
    //melakukan pertukaran posisi
    while(awal <= akhir){
        tengah = (awal + akhir)/2;
        //jika keyword berada di tengah data
        if(key == data[tengah]){
            posisi = tengah;
            break;
            //jika berada sebelum data tengah
        }else if(key < data[tengah]){
            akhir = tengah - 1;
            //jika berada setelah data tengah
        }else if(key > data[tengah]){
            awal = tengah + 1;
        }
    }
    //mengembalikann nilai posisi
    return posisi;
}

int main()
{
    //mendeklarasikan array
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    /**
        for(int i = 0; i < 8; i++){
        cout << "Data ke-"<<i<< " : "<<data[i]<<endl;
        }

    */
    //rumus mencri panjang aray
    int panjang = sizeof(data)/sizeof(*data);
    int key;
    cout << "Mau cari apa : ";
    cin>>key;
    //memanggil fungsi pencarian
    int posisi = binnary_search(data,panjang,key);
    //jika posisi ditemukan
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di indeks ke-"<<posisi<<endl;
    //jika tidak ditemukan
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    return 0;
}
