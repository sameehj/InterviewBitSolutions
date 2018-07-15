// Question: https://www.interviewbit.com/problems/rotated-sorted-array-search/

int searchRec(const vector<int> &A, int B, int i, int j) {

    int mid = (i+j)/2;

    if (A[mid] == B)
    {
        return mid;
    }
    
    if (j==i)
    {
        return -1;
    }

    if ((A[mid] > A[j] && (A[mid] < B || B <= A[j])) || (A[mid] < B && B < A[j]))
    {
        return searchRec(A, B, mid, j);
    }
    
    return searchRec(A, B, i, mid);
}

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return searchRec(A, B, 0, A.size() - 1);
}
