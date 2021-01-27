#include <iostream>
using namespace std;

int main() 
{
    int test_cases;
    cin >> test_cases;
    while (test_cases != 0)
    {
        int L, R;
        cin >> L >> R;
        int res = 0;
        for (int i = L; i <= R; ++i)
        {
            int mod = i % 10;
            if (mod == 2 || mod == 3 || mod == 9)
            {
                ++res;
            }
        }
        cout << res << '\n';
        --test_cases;
    }
	return 0;
}
