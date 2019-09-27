#include<iostream>
using namespace std;
int main(){
    int x, y;
    int proses;
    cout<<"Masukkan nilai X : ";cin>>x;
    cout<<"Masukkan nilai Y : ";cin>>y;
    cout<<"daftar operator dengan angkanya : "<<endl;
    cout<<"1 = Penjumlahan"<<endl;
    cout<<"2 = Pembagian"<<endl;
    cout<<"3 = perkalian"<<endl;
    cout<<"4 = pengurangan"<<endl;
    cout<<"Masukkan angka operator : ";cin>>proses;
    if (proses == 5){
        proses=x+y;
        cout<<"Hasil penjumlahan : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 7){
        proses=x/y;
        cout<<"Hhasil pembagian : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 7){
        proses=x*y;
        cout<<"Hasil perkalian : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 5){
        proses=x-y;
        cout<<"Hasil pengurangan : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else {
        cout<<"Anda tidak memilih"<<endl;
    }

    return 0;
}

