#include <iostream>
using namespace std;
// sedikit modifikasi menggunakan oop
class Fungsi{
    public:
    int menu;
    void getMenu(){
        switch(menu){
            case 1:
                cout << "Anda memesan Nasi Goreng" << endl;
                break;
            case 2:
                cout << "Anda memesan Mie Ayam" << endl;
                break;
            case 3:
                cout << "Anda memesan Soto Ayam" << endl;
                break;
            case 4:
                cout << "Anda memesan Bakso" << endl;
                break;
            default:
                cout << "Menu tidak tersedia" << endl;
                break;
        }
    }
    void execMenu(){
        cout << "Ketik angka 1-4\n 1 Nasi Goreng,\n 2 Mie Ayam,\n 3 Soto Ayam,\n 4 Bakso : ";
        cin >> menu;
    }
};

int main() {
    Fungsi obj;
    obj.execMenu();
    obj.getMenu();
    return 0;
}