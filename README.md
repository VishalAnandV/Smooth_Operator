# Smooth_Operator
This library function performs a basic smoothing of array 'in', writing the result into 'out'. Both arrays are assumed to have length N, and it is assumed that h>=0. For each i, out[i] will be the average of in[k] over all k that satisfy i-h <= k <= i+h and 0 <= k <= N-1.
