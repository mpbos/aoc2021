#include "load_inputs.h"

using namespace std;

int main()
{
    auto inputs = loadInputs("input7.txt");

    // Compute the highest horizontal position
    int highest_position = 0;
    for (auto& line : inputs)
    {
        auto number = stoi(line);
        if (number > highest_position)
            highest_position = number;
    }

    // Loop over all possible horizontal positions and compute the total amount of fuel that would
    // be necessary. Save the lowest fuel consumption found.
    int lowest_fuel_a = 1000000;
    long long int lowest_fuel_b = 100000000000;
    for (int i = 0; i < highest_position; ++i)
    {
        // Compute total fuel consumption for this horizontal position
        int fuel_a = 0;
        int fuel_b = 0;
        for (auto& line : inputs)
        {
            auto number = stoi(line);
            int distance = std::abs(number - i);
            fuel_a += distance;
            fuel_b += distance * (distance + 1) / 2;
        }
        // If it is the lowest so far: save it
        if (fuel_a < lowest_fuel_a)
            lowest_fuel_a = fuel_a;
        if (fuel_b < lowest_fuel_b)
            lowest_fuel_b = fuel_b;
    }

    cout << "Answer a: " << lowest_fuel_a << endl;
    cout << "Answer b: " << lowest_fuel_b << endl;

    return 0;
}
