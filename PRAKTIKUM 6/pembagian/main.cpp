#include <iostream>

using namespace std;

float fungsi_bagi(float x, float y){
    return x/y;
}

int main()
{
    float atas, bawah;
    cout << "Masukkan Nilai x : ";cin>> atas;
    cout << "Masukkan Nilai y : ";cin>> bawah;
    cout <<atas<<"/"<<bawah<< " = " <<fungsi_bagi(atas,bawah);
    return 0;
}
