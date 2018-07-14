// Question: https://www.interviewbit.com/problems/square-root-of-integer/

int sqrtRec(int A, int i, int j) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int candidate = (i + j) / 2;
    if ((candidate * candidate <=  A) && ((candidate + 1) * (candidate + 1) > A))
    {
        return candidate;
    }
    else if (candidate * candidate >  A)
    {
        return sqrtRec(A, i, candidate);
    }
        return sqrtRec(A, candidate + 1, j);
}

int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return sqrtRec(A, 0, A);
}
