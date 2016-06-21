#ifndef DSP_WINDOW_WINDOW_FUNCTION_H
#define DSP_WINDOW_WINDOW_FUNCTION_H
enum WINDOW {
    RECT,
    HANNING,
    BLACKMAN,
};
enum FACTORKIND {
    POWER,
    AMPLITUDE,
};

inline double WindowFactor(WINDOW window, FACTORKIND kind)
{
    static const double factor[][2] {
        {1,1},
        {1.633,2},
        {1.812,2.381},
    };
    return factor[window][kind];
}
double HannItem(size_t n, size_t N);
void Hanning(double *hann, size_t N);
double BlackmanItem(size_t n, size_t N);
void Blackman(double *blackman, size_t N);

#endif // !DSP_WINDOW_WINDOW_FUNCTION_H#pragma once
