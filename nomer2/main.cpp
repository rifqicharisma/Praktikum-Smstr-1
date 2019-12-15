#include <iostream>
//sebagai library code

using namespace std;
//menyajikan perintah atau deklaraasi

int addem(int, int);
//deklarasi code integer terdapat data integer

int addem(int a, int b){
    //deklarasi code integer terdapat variabel data a,b,c
    int c;
// variable data c
    c = a+b;
// bahwa c= hasil penjumlahan a dan b
    return c;
    //mengembalikan nilai c
}

int main()
//code dimana semua program ditulis
{
    int x=5, y=2, z;
    //deklarasi bahwa nilai x=5, y= 2 (z belum diketahui nilainya)

    z= addem(x,y);
    //deklarasi bahwa z adalah hasil jumlah x dan y
    cout << z << endl;
    //mencetak variabel Z

    return 0;
    //mengembalikan nilai integer
}
