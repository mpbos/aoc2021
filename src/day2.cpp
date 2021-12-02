#include "load_inputs.h"

using namespace std;

int main()
{
    auto inputs = loadInputs("input2.txt");

    int x = 0;
    int y_a = 0;
    int aim = 0;
    long long int y_b = 0;

    for (auto& line : inputs)
    {
        auto side = line.substr(0, line.find(' '));
        auto number = stoi(line.substr(line.find(' ') + 1, 1));
        if (side == "up")
        {
            y_a -= number;
            aim -= number;
        }
        if (side == "down")
        {
            y_a += number;
            aim += number;
        }
        if (side == "forward")
        {
            x += number;
            y_b += aim * number;
        }
    }

    cout << "Answer a: " << x * y_a << endl;
    cout << "Answer b: " << x * y_b << endl;

    return 0;
};
