#include <iostream>
using namespace std;

int main() 
{
	while (true)
	{
	    int n;
	    cin >> n;
	    if (n == 42)
	    {
	        break;
	    }
	    else
	    {
	        cout << n << '\n';
	    }
	}
	return 0;
}
