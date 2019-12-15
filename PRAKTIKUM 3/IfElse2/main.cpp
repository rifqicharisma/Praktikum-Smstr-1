#include <iostream>
//memanggil library iostream
using namespace std;
//menyajikan perintah deklarasi
int main()
//kode dimana semua program ditulis
{
   int bil;
   //variabel "bil" bertipe integer
   cout<< "masukkan sebuah bilangan :";
   //mencetak kata "masukkan sebuah bilangan"
   cin>>bil;
    //memasukkan variabel "bil
   if(bil%2==0)
    //jika variabel "bil"
   {
       cout<<bil<< " adalah bilangan genap\n";
       //mencetak kata "adalah bilangan genap" yang akan mengeksekusi variabel "bil"
   }else
   //jika tidak memenuhi "if" maka akan dilanjutkan oleh else
   {
        cout<<bil<< " adalah bilangan ganjil\n";
        //mencetak tulisan "adalah bilangan ganjil" yang akan mengeksekusi variabel "bil"
   }
    return 0;
    //mengembalikan nilai integer
}
