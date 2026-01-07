// in lexiograpical order - Uses ASCII order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> arr = {"apple", "guava", "banana"};
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Sorting Strings by Length + lexiographically
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> arr = {"apple", "guava", "banana", "cat", "a"};

    sort(arr.begin(), arr.end(), [](string &a, string &b)
         {
        if(a.length()==b.length()){
            return a<b;
        }
        return a.length()<b.length(); });

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Case-Insensitive String Sorting
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return a < b;
};

int main()
{
    vector<string> arr = {"apple", "guava", "banana", "cat", "a"};
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Sorting Strings by Frequency of Characters

#include <bits/stdc++.h>
using namespace std;

string sortbyfreq(string str)
{
    unordered_map<char, int> freq;
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    vector<pair<int, char>> v;
    for (auto it : freq)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    string res = "";
    for (auto val : v)
    {
        res.append(val.first, val.second);
    }
    return res;
}

int main()
{
    string str = "vaibhav";
    string newstr = sortbyfreq(str);
    cout << newstr;
}