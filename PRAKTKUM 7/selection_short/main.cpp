#include <iostream>

using namespace std;
// mendeklarasikan prosedur cetak data
void cetak_data(int data[], int panjang);

/**< selection shorting == ascending */
//mendekalrasikan prosedur shorting
void selection_short(int data[], int panjang){
    int pos_min, tmp;
    // melakukan pertukaran
    for(int i=0; i < panjang; i++){
        pos_min = i;
        for(int j = i+1; j<panjang; j++){
            if(data[j]<data[pos_min]){
                pos_min = j;
            }
        }
        //logika untuk pertukaran
        if(pos_min != 1){
            tmp = data[i];
            data[i] = data[pos_min];
            data[pos_min] = tmp;
            // mencetak data
            cetak_data(data, panjang);
        }
    }
}
//mendeklarasikan prosedur cetak data
void cetak_data(int data[], int panjang){
    // perulangan untuk mencetak data
    for(int i = 0; i<panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}

int main()
{
    //menginputkan data
    int data[] = {7, 8, 5, 2, 4, 6, 3};
    int panjang = sizeof(data)/sizeof(*data);
    // mencetak data sebelum diurutkan
    cout << "Data sebelum shorting : "<<endl;
    cetak_data(data,panjang);
    // mencetak proses pengurutan
    cout << "Proses Pengurutan : "<<endl;
    selection_short(data, panjang);
    // mencetak data setelah diurutkan
    cout<< "Data setelah shorting : "<<endl;
    cetak_data(data, panjang);
    return 0;
}
