#include <iostream>
using namespace std;
// sedikit modifikasi menggunakan oop
class Fungsi{
    public:
    int nilai;
    char grade;
    bool lulus = true;
    void calcGrade(){
        if(nilai){
            if(nilai >= 85){
                grade = 'A';
            } else if(nilai >= 70 && nilai <= 84){
                grade = 'B';
            } else if (nilai >= 60 && nilai <= 69){
                grade = 'C';
            } else{
                lulus = false;
                cout << "Maaf anda tidak lulus" << endl;
            }
        }
    }
    void execNilai(){
    calcGrade();
    if(lulus){
        cout << "Grade anda adalah : " << grade << endl;
        }
    }
    void execInput(){
        cout << "Input nilai anda : ";
        cin >> nilai;
    }
};

int main() {
    Fungsi obj;
    obj.execInput();
    obj.execNilai();
    return 0;
}
