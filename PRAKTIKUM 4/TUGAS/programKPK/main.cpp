#include <iostream>

using namespace std;

int main()
{
    int a,b,nilai;
    nilai=0;

    cout<< "Masukkan Bilangan Pertama : ";
    cin>>a;
    cout<<"Masukkan Bilangan Kedua : ";
    cin>>b;

    for(int x=1;x<=b;x++){
        nilai=nilai+a;

        if(nilai % b==0){
            cout<< "Hasil KPK antara bilangan "<<a<<" dan "<<b<<" Adalah "<<nilai;
            break;
        }
    }

    return 0;
}

