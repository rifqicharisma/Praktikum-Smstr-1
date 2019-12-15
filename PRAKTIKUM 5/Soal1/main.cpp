#include <iostream>

using namespace std;

int main()
{
    int Array[5];
    int i;

    for(i=0;i<5;i++){

        cout<<"Nilai ke-"<<i+1<<" = ";
        cin>>Array[i];
    }
        cout<<endl;

        cout<<"Bilangan ganjil = ";

        for(i=0;i<5;i++){
            if(Array[i]%2!=0){
                cout<<Array[i]<<" ";
            }

        }
    return 0;
}
