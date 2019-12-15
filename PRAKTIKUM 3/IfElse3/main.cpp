#include <iostream>
//memanggil library iostream
using namespace std;
//menyajikan perintah deklarasi
int main()
//kode dimana semua program akan ditulis
{
    float sudut;
    //membuat variabel bertipe float
    cout << "Masukkan sebuah sudut :";
    //mencetak tulisan "masukkan sebuah sudut"
    cin>>sudut;
    //memasukkan variabel "sudut"
    if (sudut<90)
        //jika sudut kurang dari 90 maka akan dilanjutkan instruksi di bawah ini
    {
       cout <<sudut<< " adalah sudut lancip\n";
        //mencetak tulisan "adalah sudut lancip" yang akan mengeksekusi variabel "sudut"
    }else if(sudut==90)
    //jika besar sudut daripada 90 maka akan dialnjutkan dengan instruksi di bawah ini
    {
        cout <<sudut<< " adalah sudut siku-siku\n";
        //mencetak tulisan "adalah sudut siku-siku" yang akan memgeksekusi variabel "sudut"
    }else{
        //jika tidak memenuhi if maka akan dilanjutkan perintah berikut
        cout <<sudut<< " adalah sudut tumpul\n";
        //mencetak kata "adalah sudut tumpul" yang akan mengeksekusi variabel
    }
    return 0;
    //mengembalikan nilai integer
}
