// Question: https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int maxSoFar = 0;
    int max = 0;

    for (int a : A)
    {
        maxSoFar += a;
        if (maxSoFar < 0)
        {
            maxSoFar = 0;
        }
        else if (maxSoFar > max)
        {
            max = maxSoFar;
        }
    }
    return max;
}