#include <iostream>

using namespace std;

int main()
{
    char huruf;
    char a,i,u,e,o;
    cout << "masukkan sebuah huruf : ";
    cin>>huruf;

    if (huruf== 'a'|| huruf == 'e'||huruf=='i'||huruf=='u'||huruf=='o')
    {
        cout <<endl;
        cout<< "huruf yang anda masukkan: "<<huruf<<endl;
        cout<< "adalah huruf vocal\n" << endl;
    }

    if (huruf !='a'||huruf!='i'||huruf!='e'||huruf!='u'||huruf!='o')
        {
        cout<<endl;
        cout<< "huruf yang anda masukkan :"<<huruf<<endl;
        cout<< "adalah huruf konsonan\n"<<endl;
        }

    return 0;
}
