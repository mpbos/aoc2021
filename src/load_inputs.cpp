#include "load_inputs.h"

using namespace std;

vector<string> loadInputs(const string& filename)
{
    vector<string> inputs;
    string line;
    ifstream myfile("inputs/" + filename);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            inputs.push_back(line);
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";

    return inputs;
}