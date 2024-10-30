#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   
    setlocale(LC_ALL, "RUS");

    string data;
    stringstream ss;


    getline(cin, data);


    for (char vvod : data)
    {
        
        if (vvod >= 'a' && vvod <= 'z')
        {
            ss << (char)('z' - (vvod - 'a'));
        }
        
        else if (vvod >= 'A' && vvod <= 'Z')
        {
            ss << (char)('Z' - (vvod - 'A'));
        }
        
        else if (vvod >= 'А' && vvod <= 'Я')
        {
            ss << (char)('Я' - (vvod - 'А'));
        }
       
        else if (vvod >= 'а' && vvod <= 'я')
        {
            ss << (char)('я' - (vvod - 'а'));
        }
       
        else
        {
            ss << vvod;
        }
    }

    cout << ss.str() << endl;

    return 0;
}
