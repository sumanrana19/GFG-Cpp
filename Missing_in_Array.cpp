#include <bits/stdc++.h>
class Solution
{
public:
    int missingNum(vector<int> &arr)
    {
        int n = arr.size();

        int given_sum = arr[0];

        for (int i = 1; i < n; i++)
            given_sum ^= arr[i];

        int act_sum = 1;

        for (int i = 2; i <= n + 1; i++)
            act_sum ^= i;

        return given_sum ^ act_sum;
    }
};