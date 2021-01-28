#include <iostream>
#include <string>
#include <map>
#include <cstring>

using namespace std;

int main() 
{
	int T;
	string dictstr;
	scanf ("%d", &T);
	cin >> dictstr;
	map <string, int> english_dict;
	english_dict["a"] = 1;
	english_dict["b"] = 2;
	english_dict["c"] = 3;
	english_dict["d"] = 4;
	english_dict["e"] = 5;
	english_dict["f"] = 6;
	english_dict["g"] = 7;
	english_dict["h"] = 8;
	english_dict["i"] = 9;
	english_dict["j"] = 10;
	english_dict["k"] = 11;
	english_dict["l"] = 12;
	english_dict["m"] = 13;
	english_dict["n"] = 14;
	english_dict["o"] = 15;
	english_dict["p"] = 16;
	english_dict["q"] = 17;
	english_dict["r"] = 18;
	english_dict["s"] = 19;
	english_dict["t"] = 20;
	english_dict["u"] = 21;
	english_dict["v"] = 22;
	english_dict["w"] = 23;
	english_dict["x"] = 24;
	english_dict["y"] = 25;
	english_dict["z"] = 26;
	while (T != 0)
	{
	    string instr;
	    cin >> instr;
	    string resstr;
	    for (char c : instr)
	    {
	        if (isalpha (c))
	        {
	            char clwr = tolower (c);
	            string clwrstr(1, clwr);
	            int cidx = english_dict[clwrstr];
	            char res = dictstr[cidx - 1];
	            if (isupper (c))
	            {
	                resstr += toupper (res);
	            }
	            else
	            {
	                resstr += res;
	            }
	        }
	        else if (c == '_')
	        {
	            resstr += ' ';
	        }
	        else
	        {
	            resstr += c;
	        }
	    }
	    cout << resstr << '\n';
	    resstr = "";
	    --T;
	}
	return 0;
}
