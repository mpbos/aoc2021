#include "load_inputs.h"

using namespace std;

/// Computes how many samples have an increasing value
int computeIncreases(int timestep, const vector<string>& inputs)
{
    int counter = 0;
    for (int i = timestep; i < inputs.size(); ++i)
    {
        if (stoi(inputs[i]) > stoi(inputs[i - timestep]))
            counter++;
    }
    return counter;
}

int main()
{
    auto inputs = loadInputs("input1.txt");

    int timestep_a = 1;
    int timestep_b = 3;

    int counter_a = computeIncreases(timestep_a, inputs);
    int counter_b = computeIncreases(timestep_b, inputs);

    cout << "Answer a: " << counter_a << endl;
    cout << "Answer b: " << counter_b << endl;

    return 0;
};
