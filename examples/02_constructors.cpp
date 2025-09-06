#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    int ram;

    // Constructor
    Laptop(string b, int r) {
        brand = b;
        ram = r;
        cout << "Laptop created: " << brand << ", " << ram << "GB RAM" << endl;
    }

    // Destructor
    ~Laptop() {
        cout << "Laptop object destroyed: " << brand << endl;
    }

    void showSpecs() {
        cout << "Brand: " << brand << ", RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Laptop myLaptop("HP", 8);
    myLaptop.showSpecs();

    return 0;
}
