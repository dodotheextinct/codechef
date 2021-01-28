#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_max (int idx, std::vector <int> vec)
{
    int min = INT_MAX;
    int count = 0;
    for (int i = idx - 1; i > -1; --i)
    {
        if (vec.at(i) < min)
        {
            min = vec.at(i);
        }
        ++count;
        if (count == 5)
        {
            break;
        }
    }
    return min;
}

int main() 
{
    int T;
    cin >> T;
    while (T != 0)
    {
        int N;
        cin >> N;
        std::vector<int> rates;
        for (int i = 0; i < N; ++i)
        {
            int r;
            cin >> r;
            rates.push_back (r);
        }
        int goodcount = 0;
        for (int i = 0; i < rates.size (); ++i)
        {
            int min5 = get_max (i, rates);
            if (rates.at (i) < min5)
            {
                ++goodcount;
            }
            min5 = INT_MAX;
        }
        cout << goodcount << '\n';
        goodcount = 0;
        --T;
    }
	return 0;
}
