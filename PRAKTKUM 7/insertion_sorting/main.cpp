#include <iostream>

using namespace std;
//mendeklarasikan prosedur untuk mencetak data
void cetak_data(int data[], int panjang);

/**< insertion shorting = ascending */
// mendeklarasikan prosedur shorting
void insertion_sort(int data[], int panjang){
    int tmp, j;
    // melakukan pertukaran
    for(int i = 1; i < panjang; i++){
        j=i;
        while(j > 0 && data[j-1] > data[j]){
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            j--;
            // memanggil prosedur cetak data
            cetak_data(data, panjang);
        }
    }
}
// mendeaklrasikan prosedur untuk mencetak darta
void cetak_data(int data[], int panjang){
    for(int i = 0; i< panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}

int main()
{
    // menginputkan data
    int data[] = {7, 8, 5, 2, 4, 6, 3};
    int panjang = sizeof(data)/sizeof(*data);
    // mencetak data sebelum diurutkan
    cout << "Data sebelum shorting : "<<endl;
    cetak_data(data,panjang);
    // mencetak proses pengurutan
    cout << "Proses Pengurutan : "<<endl;
    insertion_sort(data, panjang);
    // mencetak hasil pengurutan data
    cout<< "Data setelah shorting : "<<endl;
    cetak_data(data, panjang);
    return 0;
}
