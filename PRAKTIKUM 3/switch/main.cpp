#include <iostream>
//memanggil library iostream
using namespace std;
//menyajikan perintah deklarasi
int main()
//kode dimana semua program diutlis
{
    int noHari;
    //menambahkan variabel noHari bertipe integer
    cout << "masukkan nomer hari (1-7) :";
    //mencetak kata "masukkan nomer hari..."
    cin>>noHari;
    //memasukkan variabel noHari
    switch (noHari)
    //ememasukkan sebuah ekspresi
    {
    case 1:
        //pilihan pertama
    cout << "sekarang adalah hari minggu\n";
    //menampilkan tulisan "sekarang adalah hari minggu"
            break;
            //memberhentiklan suatu perintah
    case 2:
        //pilihan kedua
    cout << "sekarang adalah hari senin\n";
    ////menampilkan tulisan "sekarang adlah hari senin"
            break;
            //memberhentikan suatu perintah
    case 3:
        //pilihan ketiga
    cout << "sekarang adalah hari selasa\n";
    //menampilkan tulisan "sekarang adalah hari selasa"
            break;
            //memberhentikan suatu perintah
    case 4:
         //pilihan keempat
    cout << "sekarang adalah hari rabu\n";
    //menampilkan tulisan "sekarang adalah hari rabu"
            break;
            //memberhentikan suatu perintah
    case 5:
        //pilihan kelima
    cout << "sekarang adalah hari kamis\n";
    //menampilkan tulisan "sekarang adalah hari kamis"
            break;
            //memberhentikan suatu perintah
    case 6:
        //pilihan keenam
    cout << "sekarang adalah hari jumat\n";
    //menampilkan tulisan "sekarang adalah hari jumat"
            break;
            //memberhentikan suatu perintah
    case 7:
        //pilihan ke 7
    cout << "sekarang adalah hari sabtu\n";
    //menampilkan tulisan "sekarang adalah hari sabtu"
            break;
            //memberrhentikna suatu perintah
    default:
        //jika tidak ada selain perintah yang diinputkan di atas maka akan dilanjutkan instruksi berikut
        cout << "Gaada cuy..... hari ke-"<<noHari<<endl;
        //menampilkan tulisan "gaada cuy.." didalam variabel noHari
             break;
             //memberhentikan suatu perintah
    }
    return 0;
    //mengembalikan suatu nilai integer
}
