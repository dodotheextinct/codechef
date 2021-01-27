#include <iostream>
using namespace std;

long long int fact (int N)
{
    long long int fres = 1;
    for (int i = 1; i <= N; ++i)    
    {
        fres *= i;
    }
    return fres;
}

int main() 
{
	int T;
	cin >> T;
	while (T != 0)
	{
	    int N;
	    cin >> N;
	    cout << fact (N) << '\n';
	    --T;
	}
	return 0;
}
