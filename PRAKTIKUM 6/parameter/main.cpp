#include <iostream>
/**< menambahkan library C++ */
using namespace std;
/**< menyajikan deklarasi */
int x,y;
/**< mendeklarasikan suatu variabel */
int fungsi_kuadrat(int x,int y){
/**< mendeklarasikan suatu fungsi dan parameter */
int hasil = (x*y)+(y*y);
/**< mendeklarasikan suatu variabel beserta logikanya */
return hasil;
/**< mengembalikan nilai hasil */
}
int main()
{
    cout<< "Masukkan x : ";cin>>x;
    cout << "Masukkan y : ";cin>>y;
    cout << "Hasil : "<<fungsi_kuadrat(x,y)<<endl;
    /**< menampilkan fungsi dan parameternya */
    return 0;
    /**< mengembalikan nilai integer */
}
