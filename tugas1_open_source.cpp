#include <iostream>
using namespace std;
// sedikit modifikasi menggunakan oop
class Fungsi{
    public:
    double harga, diskon; int total;
    void calcDiskon(){
        total = harga - (harga * diskon / 100);
    }
    void execHarga(){
        if(harga >= 500000){
            diskon = 20;
        } else if(harga >= 300000){
            diskon = 15;
        } else if(harga >= 100000){
            diskon = 10;
        } else{
            diskon = 0;
        }
        calcDiskon();
        if(diskon > 0){
            cout << "Selamat anda mendapatkan diskon " << diskon << "%" << endl;
            cout << "Total harga setelah diskon : " << total << endl;
        } else{
            cout << "Maaf anda tidak mendapatkan diskon" << endl;
        }
    }
    void execPembelian(){
        cout << "Input harga barang : ";
        cin >> harga;
    }
};

int main() {
    Fungsi obj;
    obj.execPembelian();
    obj.execHarga();
    return 0;
}