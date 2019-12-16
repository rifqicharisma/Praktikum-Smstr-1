#include <iostream>

using namespace std;
void bubble_short(string data[], int panjang){
    bool not_shorted = true;
    int j=0;
    string tmp;

    while(not_shorted){
        not_shorted = false;
        j++;
        for(int i = 0; i< panjang; i++){
            if(data[i] > data[i+1]){
                tmp = data[i];
                data[i]= data[i+1];
                data[i+1] = tmp;
                not_shorted = true;
            }
        }
    }
}

void cetak_data(string data[], int panjang){

    for(int i = 0; i<panjang; i++){
        cout << data[i] << " ,";
    }
    cout<<endl;
}

int main()
{
    string data[] = {"siti", "situ", "sana", "ana", "ani", "caca","cici", "dida", "dodo", "dadi"};
    int panjang = sizeof(data)/sizeof(*data);
    for(int i =0; i < panjang; i++){
        cout << "Anak ke-"<<(i+1)<<" : "<<data[i]<<endl;
    }
    cout<<endl;
    cout<< "Data Setelah Diurutkan : "<<endl;
    bubble_short(data, panjang);
    cetak_data(data, panjang);
    return 0;
}
