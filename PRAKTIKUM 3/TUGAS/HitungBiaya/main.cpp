#include <iostream>

using namespace std;

int main()
{
    int noUrut;

    cout << "<<MENU MENGHITUNG BIAYA OPERASI>>" <<endl;
    cout << "1. Hitung Biaya Operasi Mata" << endl;
    cout << "2. Hitung Biaya Operasi Jantung" << endl;
    cout << endl;
    cout << "masukkan pilihan anda : ";
    cin>>noUrut;
    cout <<endl;

        switch (noUrut)
        {
            case 1:
            cout << "===Jenis Penyakit Mata==="<<endl;
            cout << "1. Katarak" << endl;
            cout << "2. Plus/Minus" << endl;
            cout << "3. Silinder" << endl;
            cout <<endl;
            cout << "Masukkan jenis penyakit mata : ";
            cin>>noUrut;
            cout<<endl;
            if (noUrut==1)
            {
               cout << "Biaya Operasi Mata Katarak = Rp. 7.500.000"<<endl;
            }else if(noUrut==2)
                {
                    cout << "Biaya Operasi Mata Plus/Minus = Rp. 5000.000"<<endl;
                }else if (noUrut==3)
                {
                  cout << "Biaya Operasi Mata Silinder = Rp. 4000.000"<<endl;
                }else{
                cout << "Inputan Anda Salah... Silahkan Ulangi Lagi"<<endl;
                }



            break;

            case 2:
            cout << "===Jenis Penyakit Jantung==="<<endl;
            cout << "1. Jantung Koroner" << endl;
            cout << "2. Katup Jantung" << endl;
            cout << "3. Otot Jantung" << endl;
            cout <<endl;
            cout << "Masukkan jenis penyakit Jantung : ";
            cin>>noUrut;
            cout <<endl;

            if (noUrut==1)
            {
                cout << "Biaya Operasi Jantung Koroner : Rp. 500.000.000"<<endl;
            }else if(noUrut==2)
            {
              cout << "Biaya Operasi Katup Jantung : Rp. 350.000.000"<<endl;
            }else if(noUrut==3)
            {
            cout << "Biaya Operasi Otot Jantung : Rp. 450.000.000"<<endl;
            }else{
            cout << "Inputan Anda Salah... Silahkan Ulangi Lagi"<<endl;
            }
            break;

        }
    return 0;
}
