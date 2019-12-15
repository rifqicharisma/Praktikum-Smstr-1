#include <iostream>
//memanggil library uang bernama iostream
#include <iomanip>
//untuk memanipulasi input dan output
using namespace std;
//menyajikan perintah atau deklarasi

int main() {
    //code dimana semua program akan ditulis

    cout << "Baris ini tanpa endl.";
    //berfungsi untuk menunjukkan bahwa baris ini tanpa adanya enter
    cout << "Manipulator endl" << endl;
    //berfungsi untuk menampilkan tulisan manipulator yang memakai enter
    cout << dec << 10 << endl;
    //berfungsi untuk mengkonversi bilangan desimal
    cout << hex << 10 << endl;
    //berfungsi untuk mengkonversi bilangan hexadecimal
    cout << oct << 10 << endl;
    //berfungsi untuk mengkonversi bilangan octal
    cout << setiosflags(ios::fixed);
    //mengatur jumlah banyaknya bilangan di belakang koma
    cout << setprecision(4) << 123.4567891 << endl;
    //mengatur belakang gkoma
    return 0;
    //mengembalikan fungsi integer
}
