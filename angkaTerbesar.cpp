#include<iostream>
using namespace std;
    int main(){
        //cout<<"Nama: Muhammad Rizky Rajabi"<<endl;
        //cout<<"NPM: 2410631170039"<<endl;
        //cout<<"Kelas: 1B"<<endl;
        //cout<<"prodi: Informatika"<<endl<<endl;

    //Soal Nomor 2

    int angka1, angka2, angka3;
    cout<<"masukkan angka pertama: ";
    cin>>angka1;
    cout<<"masukkan angka kedua: ";
    cin>>angka2;
    cout<<"masukkan angka ketiga: ";
    cin>>angka3;

    if (angka1>angka2 && angka3){
        cout<<"\nangka terbesar= "<<angka1<<endl;
    }else if (angka2>angka3 && angka1){
        cout<<"\nangka terbesar= "<<angka2<<endl;
    }else if (angka3>angka1 && angka2){
        cout<<"\nangka terbesar= "<<angka3<<endl;
    }else {}

    return 0;
    }

