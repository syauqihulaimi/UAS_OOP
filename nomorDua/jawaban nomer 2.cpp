#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string Merek; 
    int year;
    double Kecepatan;

public:
    Car(string Merek, int year, double Kecepatan) : Merek(Merek), year(year), Kecepatan(Kecepatan) {}

    double calculateTime(double distance) {
        return distance / Kecepatan; 
    }
};

int main() {
    Car car("Avanza", 2018, 60); 

    double distance = 100; 
    double time_taken = car.calculateTime(distance); 
    cout << "Waktu yang dibutuhkan untuk menempuh jarak 100 km: " << time_taken << " jam" << endl; 

    return 0;
}
