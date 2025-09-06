#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    int ram; 
    void showSpecs() {
        cout << "Laptop brand: " << brand << ", RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Laptop myLaptop;
    myLaptop.brand = "Dell";
    myLaptop.ram = 16;

    myLaptop.showSpecs();
    return 0;
}
