#include <cmath>
#include "WindowConstNumber.h"

double HannItem(size_t n, size_t N)
{
    return 0.5 - 0.5*cos((M_2_PI*n) / (N - 1));
}

void Hanning(double *hann, size_t N)
{
    for (size_t i = 0; i < N; ++i) {
        hann[i] = HannItem(i, N);
    }
}


