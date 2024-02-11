#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    double gajiperjam;
    double jumlahjamkerja;

public:
    Employee(string name, double gajiperjam, double jumlahjamkerja) : name(name), gajiperjam(gajiperjam), jumlahjamkerja(jumlahjamkerja) {}

    double calculateSalary() {
        return gajiperjam * jumlahjamkerja;
    }
};

int main() {
    Employee gajikaryawan("syauqi", 10.000, 50); 

    double totalSalary = gajikaryawan.calculateSalary();

    cout << "Total gaji untuk " << gajikaryawan.name << ": Rp" << totalSalary << endl;

    return 0;
}
