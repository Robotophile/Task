#include "matrix.hpp"   
#include <iostream>

int** ct(size_t M, size_t N){
    int** t = new int* [M];
    size_t crtd = 0;
    try{
        for(;crtd < N; ++crtd){
            t[crtd] = new int[N];
        }
    }catch(const std::bad_alloc &e){
        dt(t, crtd);
        throw;
    }
    return t;
}

void dt(int** t, size_t M){
    for(size_t i=0; i<M; ++i){
        delete[] t[i];
    }
}

void in(int** t, size_t M, size_t N){     
    for(size_t i = 0; i < M; ++i){
        for(size_t j = 0; j < N; ++j){
            std::cin >> t[i][j];
        }
    }
}

void out(const int* const* t, size_t M, size_t N){
    for(size_t i = 0; i < M; ++i){
        std::cout << t[i][0];
        for(size_t j = 1; j < N;++j){
            std::cout << "" << t[i][j];
        }
        std::cout << '\n';
    }
}