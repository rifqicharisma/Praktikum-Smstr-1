#include <iostream>


using namespace std;
/**< mendeklarasikan prosedur untuk mencetak data */
void cetak_data(int data[], int panjang);

/**< bubble shorting == ascending */
/**< mendeklarasikan logika pengurutan */
void bubble_short(int data[], int panjang){
    bool not_shorted = true;
    int j=0, tmp;
    /**< melakukan pertukaran */
    while(not_shorted){
        not_shorted = false;
        j++;
        for(int i = 0; i< panjang; i++){
            if(data[i] > data[i+1]){
                tmp = data[i];
                data[i]= data[i+1];
                data[i+1] = tmp;
                not_shorted = true;
                /**< memanggil prosedur cetak data */
                cetak_data(data, panjang);
            }
        }
    }
}
/**< mendekalrasikan prosedur untuk mencetak data */
void cetak_data(int data[], int panjang){
    /**< perulangan untuk mencetak data */
    for(int i = 0; i<panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}

int main()
{
    /**< menginput data */
    int data[] = {7, 8, 5, 2, 4, 6, 3};
    int panjang = sizeof(data)/sizeof(*data);
    /**< mencetak data sebelum shorting */
    cout << "Data sebelum shorting : "<<endl;
    cetak_data(data,panjang);

    /**< mencetak proses pertukaran ketika diurutkan */
    cout << "Proses Pengurutan : "<<endl;
    bubble_short(data, panjang);
    /**< mencetak data setelah diurutkan */
    cout<< "Data setelah shorting : "<<endl;
    cetak_data(data, panjang);
    return 0;

}
