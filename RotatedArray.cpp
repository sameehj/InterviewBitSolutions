// Question: https://www.interviewbit.com/problems/rotated-array/

int findMinRec(const vector<int> &A, int i, int j) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int candidate = (i + j) / 2;
    int n = A.size();
    if ((A[candidate] >  A[candidate + 1]))
    {
        return A[candidate + 1];
    }

    if (A[candidate] < A[i])
    {
        return findMinRec(A, i, candidate);
    }
    return findMinRec(A, candidate, j);
}

int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return findMinRec(A, 0, A.size());
}
