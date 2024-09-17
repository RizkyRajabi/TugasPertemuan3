#include<iostream>
using namespace std;
int main(){
    int pilihan;
    float sisi, panjang, lebar, alas, tinggi, luas;

    cout<<"pilih bangun datar yang ingin dihitung luasnya:"<<endl;
    cout<<"1. persegi"<<endl;
    cout<<"2. persegi panjang"<<endl;
    cout<<"3. segitiga"<<endl;
    cout<<"\nmasukkan pilihan: ";
    cin>>pilihan;

    switch(pilihan){
     case 1:
    cout<<"\nMenghitung Luas Persegi"<<endl;
    cout<<"(Sisi*Sisi)"<<endl;
    cout<<"\nmasukkan sisi= ";
    cin>>sisi;
    luas= sisi*sisi;
    cout<<"\njadi, luas persegi panjang adalah= "<<luas<<endl;
    break;
     case 2:
    cout<<"\nMenghitung Luas Persegi Panjang"<<endl;
    cout<<"(Panjang*Lebar)"<<endl;
    cout<<"\nmasukkan panjang= ";
    cin>>panjang;
    cout<<"masukkan lebar= ";
    cin>>lebar;
    luas= panjang*lebar;
    cout<<"\njadi, luas persegi panjang adalah= "<<luas<<endl;
    break;
     case 3:
    cout<<"\nMenghitung Luas Segitiga"<<endl;
    cout<<"(0.5*Alas*Tinggi)"<<endl;
    cout<<"\nmasukkan alas= ";
    cin>>alas;
    cout<<"masukkan tinggi= ";
    cin>>tinggi;
    luas= 0.5*alas*tinggi;
    cout<<"\njadi, luas segitiga adalah= "<<luas<<endl;
    break;
     default:
    cout<<"\npilihan tidak valid"<<endl;

    return 0;

    }




         }
