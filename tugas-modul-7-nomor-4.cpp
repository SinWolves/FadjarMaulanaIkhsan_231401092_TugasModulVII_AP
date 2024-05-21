#include <iostream>

void plus (int* x, int* y, float* z){
    *z= *x + *y;
}

void minus (int* x, int* y, float* z){
    *z= *x - *y;
}

void times (int* x, int* y, float* z){
    *z= *x * *y;
}

void divide (int* x, int* y, float* z){
    if (*y != 0){
        *z= static_cast<float>(*x) / *y;
    }
    else{
        std::cout << "Bilangan tidak boleh dibagi dengan 0" << std::endl;
    }
}
    
    
int main()
{
    int i, j;
    float k;
    char op;
    
    std::cout << "Masukkan Bilangan Pertama: ";
    std::cin >> i;
    std::cout << "Masukkan Bilangan Kedua: ";
    std::cin >> j;
    
    std::cout << "Masukkan Simbol Operasi (+,-,*,/): ";
    std::cin >> op;
    
    switch(op){
        case '+':
            plus(&i, &j, &k);
            std::cout << i << " + "<< j << " = "<< k << std::endl;
            break;
        case '-':
            minus(&i, &j, &k);
            std::cout << i << " - "<< j << " = "<< k << std::endl;
            break;
        case '*':
            times(&i, &j, &k);
            std::cout << i << " * "<< j << " = "<< k << std::endl;
            break;
        case '/':
            divide(&i, &j, &k);
            if (j != 0) {
                std::cout << i << " / "<< j << " = "<< k << std::endl;
            }
            break;
        default:
            std::cout << "Operasi tidak tersedia" << std::endl;
            break;
    }
    return 0;
}