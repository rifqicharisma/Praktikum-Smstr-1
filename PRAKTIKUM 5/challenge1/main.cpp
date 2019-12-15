#include <iostream>

using namespace std;

int main()
{

    int bulan;
    cout << "inputkan bulan : ";cin>>bulan;
    string bl[] = {"januari", "februari", "maret", "april", "mei", "juni", "juli", "agustus", "september", "okotber", "november", "desember"};
    cout << bl[bulan-1]<<endl;
    return 0;
}
