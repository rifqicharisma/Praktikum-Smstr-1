#include <iostream>

using namespace std;
//ascending
void insertion_sort(char data[], char panjang){
    char tmp;
    int j;
    for(int i = 1; i < panjang; i++){
        j=i;
        while(j > 0 && data[j-1] > data[j]){
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            j--;
        }
    }
}

void cetak_data(char data[], char panjang){
    for(int i = 0; i< panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}
//descending
void insertion(char data[], char panjang){
    char tmp;
    int j;
    for(int i = 1; i < panjang; i++){
        j=i;
        while(j > 0 && data[j-1] < data[j]){
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            j--;
        }
    }
}

void cetak(char data[], char panjang){
    for(int i = 0; i< panjang; i++){
        cout << data[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int angka = 0;
    char nama;
    cout << "Berapa input\t: ";cin>> angka;

    char data[angka];
    int panjang = sizeof(data) / sizeof(*data);
    cout << "\n";

    for(int i=0; i < panjang ; i ++){
        cout <<"Karakter ke-"<<(i+1)<<" : ";cin>>nama;
        data[i]=nama;
    }
    cout << "Urutan Karakter Setelah Ascending Short : "<<endl;
    insertion_sort(data, panjang);
    cetak_data(data, panjang);
    cout << "Urutan Karakter Setelah Descending Short : "<<endl;
    insertion(data, panjang);
    cetak(data, panjang);
    return 0;
}
