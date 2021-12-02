#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

/// Computes how many samples have an increasing value
int computeIncreases(int timestep, const vector<int>& inputs)
{
    int counter = 0;
    for (int i = timestep; i < inputs.size(); ++i)
    {
        if (inputs[i] > inputs[i - timestep])
            counter++;
    }
    return counter;
}

int main()
{
    vector<int> inputs;
    string line;
    ifstream myfile("inputs/input1.txt");
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

    int timestep_a = 1;
    int timestep_b = 3;

    int counter_a = computeIncreases(timestep_a, inputs);
    int counter_b = computeIncreases(timestep_b, inputs);

    cout << "Answer a: " << counter_a << endl;
    cout << "Answer b: " << counter_b << endl;

    return 0;
};
