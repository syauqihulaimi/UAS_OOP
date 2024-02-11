#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int usia;
    double nilai;

public:
    Student(string name, int usia, double nilai) : name(name), usia(usia), nilai(nilai) {}

    void displayInfo() {
        cout << "Nama: " << name << endl;
        cout << "Usia: " << usia << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main() {
    Student Mahasiswa("Syauqi", 19, 99.9);

    Mahasiswa.displayInfo();

    return 0;
}
