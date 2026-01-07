// bucket sort algorithm where we sort the array based on their frequency of element

#include <bits/stdc++.h>
using namespace std;

vector<int> sortbyFreq(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (auto a : arr)
    {
        freq[a]++;
    }

    vector<vector<int>> bucket(arr.size() + 1);
    for (auto it : freq)
    {
        bucket[it.second].push_back(it.first);
    }

    vector<int> res;

    for (int i = arr.size(); i >= 1; i--)
    {
        for (auto val : bucket[i])
        {
            for (int k = 0; k < i; k++)
            {
                res.push_back(val);
            }
        }
    }
    return res;
};

int main()
{
    vector<int> arr = {1, 1, 2, 3, 1, 2, 3, 3, 3};
    vector<int> S = sortbyFreq(arr);
    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i] << " ";
    }
}
