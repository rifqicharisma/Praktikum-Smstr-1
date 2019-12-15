#include <iostream>
//memanggil library iostream
#include <iomanip>
//memanipulasi input dan output

using namespace std;
//menyajikan perintah deklarasi

int main ()
//kode dimana semua  program akan ditulis
{
    float angka;
    //memuat variable angka bertipe float
    std::cout << "inputkan bilangan desimal :";
    //mencetak tulisan "inputkan bilangan desimal"
    std::cin>>angka;
    //memasukkan variabel angka
    std::cout << "\nMenampilkan dua buah angka dibelakang koma : \n" << std ::endl;
    //mencetak tulisan "menamnpilkan dua buah angka dibelakang koma"
    std::cout << std::fixed;
    //menampilkan angka sesuai dengan banyaknya angka pada kode std::cout << std::setprecision
    std::cout << std::setprecision(2) << angka << std::endl;
    //mengatur banyaknya angka dibelakang koma
    std::cout << std::endl;
    //berfungsi untuk mengirim data ke konsol untuk di cetak sebagai teks
    return 0;
    //mengembalikan nilai integer
}
