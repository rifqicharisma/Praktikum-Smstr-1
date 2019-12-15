#include <iostream>

using namespace std;

int main()
{
    int aray[5] = {5,4,3,2,1};
    int bil;
    for(int i =0 ; i < 5; i ++){
        cout <<"indeks ke-"<<(i+1)<< " : " << aray[i]<< endl;
    }
    cout << "Masukkan Bilangan : ";cin>>bil;
    for(int i = 0; i < 5; i ++){
        if(aray[i]==bil){
            cout<< "Bilangan anda berada di indeks ke "<<i+1<<endl;
        }
    }
    cout << endl;
        if(aray[5]!=bil){
             cout << "Bilangan anda tidak berada di dalam indeks array"<<endl;
        }

    return 0;
}
