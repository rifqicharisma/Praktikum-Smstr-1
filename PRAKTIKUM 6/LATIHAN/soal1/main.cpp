#include <iostream>

using namespace std;
int x;
void bilangan(int x){
   if(x%2==0){
    cout <<x<< " adalah bilangan genap" << endl;
   }else{
    cout <<x<< " adalah bilangan ganjil" << endl;
   }
}

int main()
{
    int x;
    cout << "Masukkan Bilangan : ";cin>>x;
    bilangan(x);
    return 0;
}
