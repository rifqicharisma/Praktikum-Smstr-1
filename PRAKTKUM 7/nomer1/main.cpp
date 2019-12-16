#include <iostream>

using namespace std;
void selection_short(double data[], int panjang){
    int posisi;
    double tmp;
    for(int i=0; i < panjang; i++){
        posisi = i;
        for(int j = i+1; j<panjang; j++){
            if(data[j]>data[posisi]){
                posisi = j;
            }
        }
        if(posisi != 1){
            tmp = data[i];
            data[i] = data[posisi];
            data[posisi] = tmp;
        }
    }
}
void print(double data[], int panjang){
    for(int i = 0; i<panjang; i++){
        cout << data[i] << " , ";
    }
    cout<<endl;
}
int main()
{
    double data[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int panjang = sizeof(data)/sizeof(*data);
    for(int i =0; i < 5; i++){
        cout << "Mahasiswa ke-"<<(i+1)<<endl;
        cout << "Nilai : "<<data[i]<<endl;
    }
    cout << "Data setelah diurutkan : "<<endl;
    selection_short(data, panjang);
    print(data, panjang);
    return 0;
}
