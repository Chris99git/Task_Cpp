#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string input, temp, output;
    bool up;
    while (getline(cin, input))
    {
        stringstream ss(input);
        getline(ss, temp);

        if (!(ss.str().empty()))
        {
            output = "";
            up = false;
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] == ' ')
                    up = true;
                else
                {
                    if (up)
                        output += toupper(temp[i]);
                    else
                        output += temp[i];
                    up = false;
                }
            }
            cout << output << endl;
        }
        else
            break;
    }
    return 0;
}
