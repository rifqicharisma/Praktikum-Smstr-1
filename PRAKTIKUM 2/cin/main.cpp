#include <iostream>
//memanggil library iostream
using namespace std;
//menyajikan perintah deklarasi
int main() {
    // kode dimana semua program ditulis
int bilangan;
// menunjukkan variabel bilangan yang bertipe integer
char karakter;
//menunjukkan variabel karakter uang bertipe char
string kata;
//menunjukkan variabel kata yang bertipe string
cout << "Inputkan bilangan: ";
//menampilkan tulisan input bilangan
cin >> bilangan;
//menginput variabel bilangan
cout << "Inputkan karakter: ";
//menampilkan tulisan inputkan karakter
cin >> karakter;
//menginput variabel karakter
cout << "Inputkan kata: ";
//menampilkan tulisan inputkan data
cin >> kata;
//menginput variabel kata
cout << endl << "Data yang Anda inputkan adalah: " << endl;
//menampilkan tulisan data yang anda inputkan adalah
cout << bilangan << endl;
//menampilkan variabel bilangan
cout << karakter << endl;
//menampilkan variabel karakter
cout << kata << endl;
//menampilkan variabel kata
return 0;
//mengembalikan nilai integer
}
