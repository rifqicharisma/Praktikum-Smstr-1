#include <iostream>

using namespace std;

int main()
{
    awal :
    int input, minimum, lokasi, maksimum;
    float hasil, aray[10];
    cout<<endl;
    cout << "=====MENU====="<<endl;
    cout << "1. Masukkan Array"<<endl;
    cout << "2. Tampilkan Array"<<endl;
    cout << "3. Cari Nilai Minimum"<<endl;
    cout << "4. Cari Nilai Maksimum"<<endl;
    cout << "5. Hitung Rata-rata"<<endl;
    cout << "Masukkan Input : ";cin>>input;
    cout<<endl;

    if(input==1){
        for(int i = 0; i<10;i++){
            cout << "Masukkan Array : ";cin>>aray[i];
        }
    }else if(input==2){
        for(int i = 0; i < 10 ; i ++){
            cout<<aray[i]<< " ";
        }
        cout << endl;
    }else if(input==3){
        minimum = aray[0];
          for(int i = 0; i < 10; i++) {
            if (aray[i] < minimum)  {
            minimum = aray[i];
            lokasi = i+1;
            }
        }
        cout << "Nilai minimum adalah " << minimum << " berada di elemen ke " << lokasi << endl;
    }else if(input==4){
        maksimum = aray[0];
        for(int i = 0; i < 10; i ++){
            if(aray[i] > maksimum){
                maksimum = aray[i];
                lokasi = i+1;
            }
        }
        cout << "Nilai maksimum adalah " << maksimum << endl;
    }else if(input==5){
        hasil = (aray[1]+aray[2]+aray[3]+aray[4]+aray[5]+aray[6]+aray[7]+aray[8]+aray[9]+aray[0])/10;
        cout << "Rata-ratanya adalah "<<hasil<<endl;
    }


    goto awal;
}
