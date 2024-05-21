#include <iostream>

int main() {
    int bil[10];
    
    for (int x = 0; x < 10; x++) {
        bil[x] = 2 * x + 1;
    }
    
    for (int x = 0; x < 10; x++) {
        std::cout << "Angka: " << bil[x] << ", Alamat di Memori: " << &bil[x] << std::endl;
    }
    return 0;
}