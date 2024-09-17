#include<iostream>
using namespace std;
    int main(){
        //cout<<"Nama: Muhammad Rizky Rajabi"<<endl;
        //cout<<"NPM: 2410631170039"<<endl;
        //cout<<"Kelas: 1B"<<endl;
        //cout<<"prodi: Informatika"<<endl<<endl;

    //Soal Nomor 1

    int nilai;
    cout<<"Masukkan Nilai: ";
    cin>>nilai;

    if (nilai>=90){
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl;
    }else if (nilai>=80){
        cout<<"\nAnda mendapatkan nilai B"<<endl;
    }else if (nilai>=70){
        cout<<"\nAnda mendapatkan nilai C"<<endl;
    }else if (nilai>=60){
        cout<<"\nAnda mendapatkan nilai D"<<endl;
    }else {
        cout<<"\nAnda mendapatkan nilai E"<<endl;
    }
       return 0;
    }
