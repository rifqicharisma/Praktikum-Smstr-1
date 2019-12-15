#include <iostream>
//memanggil library iostream
using namespace std;
// menyajikan perintah deklarasi
int main()
//kode dimana semua program akan ditulis
{
    int bil;
    //memasukkan variabel bertipe integer
    cout << "masukkan sebuah bilangan :";
    //mencetak kata "masukkan sebuah bilangan"
    cin>>bil;
    //memasukkan variabel "bil"

    if(bil>0)
       //jika variabel "bil" lebih dari 0, maka akan dilanjutkan instruksi di bawah ini
    {
        cout << "Bilangan yang anda masukkan :" <<bil<<endl;
        //mencetak tulisan "bilangan yang anda masukkan" di dalam variabel "bil"
        cout <<bil<< " adalah bilangan bulat positif\n";
        //mencetak tulisan "adalah bilangan bulat positif" yang mana akan mengeksekusi variabel "bil"
    }

    if(bil<0)
        //jika variabel "bil" lebih kecil daripada 0 maka akan diteruskan instruksi di bawah ini
    {
         cout << "Bilangan yang anda masukkan :" <<bil<<endl;
         //mecetak kata "bilangan yang anda masukkan" di dalam variabel "bil"
        cout <<bil<< " adalah bilangan bulat negatif\n";
        //mencetak tulisan "adalah bilangan bulat negatif" yang mana akan mengeksekusi variabel "bil"
    }

    if(bil==0)
        //jika variabel "bil" sama dengan 0 maka akan diteruskan instruksi di bawah ini
    {
        cout << "Bilangan yang anda masukkan :" <<bil<<endl;
        //mencetak variabel "bilangan yang anda masukkan" di dalam variabel "bil"
        cout <<bil<< " adalah bilangan bulat nol\n";
        //mencetak tulisan "adalah bilangna bulat nol" yang mana akan mengeksekusi variabel "bil"
    }

    return 0;
    //mengembalikan nilai integer
}
