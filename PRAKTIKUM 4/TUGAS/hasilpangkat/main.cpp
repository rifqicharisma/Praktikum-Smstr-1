#include <iostream>
#include <string>

using namespace std;
int main()
{
    awal:
   int x, y, i, pangkat =1;

   cout << "Masukkan Nilai = ";
   cin >> x;

   cout << "masukkan Pangkat = ";
   cin >> y;

    for(i =1; !(i>y); i =i+1)
    {
        pangkat =pangkat*x;
    }

   cout<<"Hasil Perpangkatan = "<< pangkat << endl;

    goto awal;
}
