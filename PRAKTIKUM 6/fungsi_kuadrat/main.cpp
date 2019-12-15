#include <iostream>

using namespace std;

void pro_kuadrat(int x){
    int hasil = x*x;
    cout << "Hasil : " <<hasil<< endl;
}

int main()
{
    int a;
    cout <<"Masukkan nilai : ";cin>>a;
    pro_kuadrat(a);
    return 0;
}
