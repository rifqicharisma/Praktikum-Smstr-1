#include <iostream>
//memanggil library iostream
using namespace std;
//menyajikan perintah deklarasi
int main()
//kode dimana semua program ditulis
{
    int i = 0;
    //mendeklarasikan variable i yang bernilai 0
    do{
    //maka lakukan perintah berikut
        cout << "Indomie kirai janai!!!" << endl;
        //menampilkan kata berikut "indomie kirai janai"
        i++;
        //incre variabel i
    }while(i<5);
    //ketika variabel i kurang dari 5
    return 0;
    //mengembalikan nilai integer
}
