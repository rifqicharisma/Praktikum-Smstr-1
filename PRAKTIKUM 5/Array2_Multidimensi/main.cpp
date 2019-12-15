#include <iostream>

using namespace std;

int main()
{
/**< mendeklarasikan matriks */
    int jml_huruf;
    /**< mendeklarasikan array matriks berordo 4x2 */
    int matriks [2][4] = {{1,2,3,4}, {5,6,7,8}};

    int baris, kolom;
    /**< membuat perulangan yang berfungsi untuk mencetak baris */
    for(baris = 0; baris < 2; baris++){
        /**< membuat perulangan yang berfungsi untuk mencetak kolom */
        for(kolom = 0; kolom < 4; kolom ++){
            /**< menampilkan array matriks */
            cout << matriks[baris][kolom] << " ";
        }
        cout << endl;
    }

    cout << endl;

    /**< mendeklarasikan aray dengan memebri isi pada array tersebut */
    int angka[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    /**< rumus untuk mengetahui jumlah dari elemen */
    int panjang = sizeof(angka) / sizeof (*angka);
    /**< membuat perulangan unutk mencetak array tersebut */
    for(int i = 0; i < panjang ; i ++){
        cout << angka[i] << " " << endl;
    }

    cout << "\nPanjangnya : " << panjang << endl;
    return 0;
}
