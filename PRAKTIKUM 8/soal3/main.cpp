#include <iostream>

using namespace std;

void bubble_short(int data[], int panjang){
    bool not_shorted = true;
    int j=0, tmp;
    while(not_shorted){
        not_shorted = false;
        j++;
        for(int i = 0; i< panjang; i++){
            if(data[i] > data[i+1]){
                tmp = data[i];
                data[i]= data[i+1];
                data[i+1] = tmp;
                not_shorted = true;
            }
        }
    }
}
void cetak_data(int data[], int panjang){
    for(int i = 0; i<panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}

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
    int data[] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};
    int panjang = sizeof(data)/sizeof(*data);
    for(int i = 0; i < panjang; i ++){
        cout << "Indeks ke-"<<i<< " : "<<data[i]<<endl;
    }
    cout<<endl;
    bubble_short(data, panjang);
    int key;
    cout << "CARI BILANGAN : ";
    cin>>key;
    cout<<endl;
    int posisi = binnary_search(data,panjang,key);
    if(posisi != -1){
        cout<< "Key "<<key<<" ada di indeks ke-"<<posisi<<endl;
    }else{
        cout<< "Key "<<key<< " tidak ditemukan!"<<endl;
    }
    return 0;
}
