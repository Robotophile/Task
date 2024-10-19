#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>
int** ct(size_t M, size_t N);
void dt(int** t, size_t M);
void in(int** t, size_t M, size_t N);
void out(const int* const* t, size_t M, size_t N);

#endif