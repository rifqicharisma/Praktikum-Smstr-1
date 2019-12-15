#include <iostream>
/**< menampilkan library C++ */

using namespace std;
/**< mendeklarasikan fungsi */
void tampil_nama(){
/**< mendeklarasikan prosedur, dan variabel */
    cout << "Nama saya adalah Robert!";
}
void tampil_alamat(string x){
/**< mendeklarasikan prosedur, variabel dan parameter */
    cout<<x;
}

int main()
{
    tampil_nama();
    /**< menampilkan prosedur */
    tampil_alamat("Jl DI Panjaitan");
    /**< menampilkan prosedur dan parameter diisi string */
    return 0;
}
