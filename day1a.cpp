#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> inputs;
    string line;
    ifstream myfile("input1.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            inputs.push_back(stoi(line));
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";

    int counter = 0;

    for (int i = 1; i < inputs.size(); ++i)
    {
        if (inputs[i] > inputs[i-1])
            counter++;
    }

    cout << counter << endl;

    return 0;
};
