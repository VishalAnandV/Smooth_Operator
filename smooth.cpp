#include <iostream>
#include "smooth.h"

void smooth(const double* in, double* out, int N, int h)
{
    // Iterate over each element of the input array
    for (int i = 0; i < N; i++)
    {
        double sum = 0; // Variable stores the sum elements within the smoothing size
        int start_index = (i - h < 0) ? 0 : i - h; // Calculate the start index of the smoothing size
        int end_index = (i + h >= N) ? N - 1 : i + h; // Calculate the end index of the smoothing size
        int smooth_size = end_index - start_index + 1; // Calculate the smoothing size

        for (int j = start_index; j <= end_index; j++)
        {
            sum += in[j]; // Calculate the sum elements within the smoothing size
        }

        out[i] = sum / smooth_size; // Calculate the average within the smoothing size
    }

    // Print the output array
    for (int i = 0; i < N; i++)
    {
        std::cout << out[i] << " ";
    }
    std::cout << std::endl;
}