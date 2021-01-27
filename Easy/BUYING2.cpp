#include <iostream>
#include <limits>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while (T != 0)
	{
	    int N, x, sum = 0, least = INT_MAX;
	    cin >> N >> x;
	    for (int i = 0; i < N; ++i)
	    {
	        int read;
	        cin >> read;
	        if (read < least)
	        {
	            least = read;
	        }
	        sum += read;
	    }
	    int r = sum % x;
	    int q = sum / x;
	    if (r >= least)
	    {
	        cout << -1 << '\n';
	    }
	    else
	    {
	        cout << q << '\n';
	    }
	    --T;
	}
	return 0;
}
