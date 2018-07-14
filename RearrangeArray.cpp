// Question: https://www.interviewbit.com/problems/rearrange-array/

void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i;
    int n = A.size();
    for (i = 0; i < n; i++)
    {
        A[i] = A[i] + (A[A[i]] % n) * n;
    }
   for (i = 0; i < n; i++)
    {
        A[i] = A[i] / n;
    }
}
