// Question: https://www.interviewbit.com/problems/rotate-matrix/

void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp;
    int n = A[0].size();
    for (int i = 0; i < n-1; i++) {
        temp = A[0][i];
        A[0][i] = A[n-1-i][0];
        A[n-1-i][0] = A[n-1][n-1-i];
        A[n-1][n-1-i] = A[i][n-1];
        A[i][n-1] = temp;
    }
}
