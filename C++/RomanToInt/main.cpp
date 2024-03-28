#include <iostream>
using namespace std;

#include <map>
#include <string>

class Convert
{
    private:
        map<string, int> romtonum;

    public:
        Convert()
        {
            romtonum["I"]= 1;
            romtonum["V"]= 5;
            romtonum["X"]=10;
            romtonum["L"]=50;
            romtonum["C"]=100;
            romtonum["D"]=500;
            romtonum["M"]=1000;
        }
        string romInput();
        void numOutput(const string romin);
        
};

string Convert::romInput()
{
    string rom;
    cout << "Enter Roman Numerial: ";
    cin >> rom;

    return rom;
}

void Convert::numOutput(const string romin)
{
    auto search = romtonum.find(romin);
    if(search != romtonum.end())
    {
        cout << "Found: " << romin << endl <<"It converts to: "<< search->second << endl;
    }
    else
    {
        cout << "ERROR: Could not find the Roman Numerial!" << endl;
    }
}


int main()
{
    Convert objCon;

    string r = objCon.romInput();
    objCon.numOutput(r);


}