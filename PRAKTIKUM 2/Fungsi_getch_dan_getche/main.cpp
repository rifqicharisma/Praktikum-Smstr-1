#include<iostream>
//memanggil library iostream
#include<conio.h>
//menampilkan hasil antarmuka kepada pengguna
using namespace std;
//menyajikan perintah deklarasi
int main() {
    //kode dimana semua program ditulis
char karakter;
//menunjukkan variabel karakter yang bertipe char
cout << "Masukkan sebuah karakter: ";
//menampilkan kata masukkan sebauh karakter
karakter = getch();
//inputan tidak akan ditampilkan ke window
cout << endl << "Hasil fungsi getch " << karakter << endl;
//mencetak tulisan hasil fungsi getch dengan hasil dari variabel karakter
cout << "Masukkan sebuah karakter: ";
//menampilkan kata masukkan sebuah karakter
karakter = getche();
//inputan akan ditampilkan di window
cout << endl << "Hasil fungsi getche " << karakter << endl;
//menampilkan tulisan hasil fungsi getche dengan hasil dari variabel karakter
return 0;
//mengembalikan nilai integer
}
