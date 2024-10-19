#include "matrix.hpp"
#include <iostream>

int main(){
    size_t M = 0, N = 0;
    std::cin >> M >> N;
    int** t = nullptr;
    if (std::cin.fail()){
        std::cout << "Input error" << '\n';
    }

    try{
        t = ct(M,N);
    }catch (const std::bad_alloc &e){
        std::cout << "Out of memory" << '\n';
        return 1;
    }
    in(t, M, N);
    out(t, M, N);
    dt(t, M);
    std::cout << '\n';
}