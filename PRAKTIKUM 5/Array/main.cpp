#include <iostream>
/**< menambahkan library iostream */
using namespace std;
/**< menyajikan deklarasi perintah */
int main()
{
    /**< mendeklarasikan array dengan tipe data tertentu */
    int TabJumlahHari[12];
    float TabNilai[15];
    char TabHuruf[100];
    string TabKata[100];

    /**< mendeklarasikan array dengan langung memberikan isi dari array tersebut*/
    char Huruf[] = {'A', 'I', 'U', 'E', 'O'};
    /**< menampilkan arrray dari elemen ke-0 sampai eemen ke-4 */
    cout << Huruf[0] << endl;
    cout << Huruf[1] << endl;
    cout << Huruf[2] << endl;
    cout << Huruf[3] << endl;
    cout << Huruf[4] << endl;

    cout << endl;
    /**< membuat perulangan terhadap array */
    int TabInt[10];
    for(int i = 0; i <10; i ++){
        /**< elemen array dikali dengan 10 */
        TabInt[i] = i*10;
    }
    /**< mencetak elemen array dalam sebuah perulangan */
    for(int i = 0 ; i < 10 ; i ++){
        cout << TabInt[i] << endl;
    }
    return 0;
}
