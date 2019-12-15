#include <iostream>
using namespace std;
int main() {
        awal:
      int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
      int in;
      cout<<endl;
      cout << "=====MENU OPERASI MATRIKS====="<<endl;
      cout << "1. Pertambahan"<<endl;
      cout << "2. Pengurangan"<<endl;
      cout << "Masukkan input : ";cin>>in;

      if(in==1){
        cout<<endl;
        cout << "Masukkan jumlah baris matriks: ";
      cin >> m;
      cout << "Masukkan jumlah kolom matriks: ";
      cin >> n;
      cout<<endl;
      cout << "Masukkan elemen matrix pertama: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          cin >> matriks1[i][j];
        }
      }
      cout << "Masukkan elemen matrix kedua: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          cin >> matriks2[i][j];
        }
      }
      cout<<endl;
      cout << "hasil penjumlahan matrix: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          hasil[i][j] = matriks1[i][j] + matriks2[i][j];
          cout << hasil[i][j] << " ";
        }
        cout << endl;
      }
      }

      if(in==2){
            cout<<endl;
        cout << "Masukkan jumlah baris matriks: ";
      cin >> m;
      cout << "Masukkan jumlah kolom matriks: ";
      cin >> n;
      cout<<endl;
      cout << "Masukkan elemen matrix pertama: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          cin >> matriks1[i][j];
        }
      }
      cout << "Masukkan elemen matrix kedua: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          cin >> matriks2[i][j];
        }
      }
      cout<<endl;
      cout << "hasil pengurangan matrix: \n";
      for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
          hasil[i][j] = matriks1[i][j] - matriks2[i][j];
          cout << hasil[i][j] << " ";
        }
        cout << endl;
      }

      }

      goto awal;
    }
