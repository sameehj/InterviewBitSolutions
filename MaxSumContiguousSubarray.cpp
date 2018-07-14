// Question: https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0;
    int max = 0;
    vector<int> SumArray;
    vector<int> MaxSubSumArray;

    for (int a : A)
    {
        sum+=a;
        SumArray.push_back(sum);
    }

    for (int i = 0; i < A.size(); i++)
    {
        max = 0;
        for (int j = 0; j < i; j++)
        {
            if ((SumArray[i] - SumArray[j] + A[j]) > max)
            {
                max = SumArray[i] - SumArray[j] + A[j];
            }
        }
        MaxSubSumArray.push_back(max);
    }

    for (int a : MaxSubSumArray)
    {
        max = a > max ? a : max;
    }

    return max;
}