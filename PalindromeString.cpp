// Question: https://www.interviewbit.com/problems/palindrome-string/

static bool shouldSkip(char c)
{
    bool ret = false;
    if (c > 'z' || c < 'A' || (c > 'Z' && c < 'a'))
    {
        ret = true;
    }
    return ret;
}

char toLower(char c)
{
    char lower = 'Z' >= c && c >= 'A' ? c + ('a' - 'A') : c;
    return lower;
}

int Solution::isPalindrome(string A) {
    int left = 0;
    int right = A.size() - 1;
    int ret = 1;
    char lower_right;
    char lower_left;
    while (left <= right)
    {
        if (shouldSkip(A[left]))
        {
            left++;
            continue;
        }
        if (shouldSkip(A[right]))
        {
            right--;
            continue;
        }
        lower_right = toLower(A[right]);
        lower_left = toLower(A[left]);
        if (lower_right != lower_left)
        {
            ret = false;
            break;
        }
        else
        {
            left++;
            right--;
        }
    }
    return ret;
}