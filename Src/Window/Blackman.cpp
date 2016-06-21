#include <cmath>
#include "WindowConstNumber.h"
double BlackmanItem(size_t n, size_t N)
{
    double f = n / (N - 1);
    return 0.42 - 0.5 * cos(M_2_PI * f) + 0.08 * cos(M_4_PI * f);
}

void Blackman(double *blackman, size_t N)
{
    for (size_t i = 0; i < N; ++i) {
        blackman[i] = BlackmanItem(i, N);
    }
}