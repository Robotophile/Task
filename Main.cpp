#include <iostream>

int main(){
    size_t M = 0, N = 0;
    std::cin >> M >> N;
    int ** t = ct(M,N);
    for(size_t i = 0; i < M; ++i){
        for(size_t j = 0; j < N; ++j){
            std::cin >> t[i][j];
        }
    }
    
    for(size_t i = 0; i < M; ++i){
        std::cout << t[i][0];
        for(size_t j = 1; j < N;++j){
            std::cout << "" << t[i][j];
        }
        std::cout << '\n';
    }
    std::cout << M << "" << N << '\n';
    
}