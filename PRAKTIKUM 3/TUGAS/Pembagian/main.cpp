#include <iostream>

using namespace std;

int main()
{
    double pembagi;
    double dibagi;
    double hasil;


    cout << "masukkan bilangan pembagi : ";
    cin>>pembagi;
    cout << "masukkan bilangan yang dibagi : ";
    cin>>dibagi;

    if (pembagi !=0 && dibagi !=0)
    {
      hasil = dibagi/pembagi;
      cout<< "hasil bagi adalah : " <<hasil<< endl;
    }
    if (dibagi ==0)
    {
       cout <<"hasil bagi adalah tak terdefinisi"<<endl;
    }else
    {
       cout << "hasil bagi adalah tak hingga"<<endl;

    }

    return 0;
}
