#include "load_inputs.h"

using namespace std;

/// Function to convert binary to decimal
int binaryToDecimal(long long int n)
{
    int dec_value = 0;
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    long long int temp = n;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}

int main()
{
    auto inputs = loadInputs("input3.txt");

    vector<int> bits_counter(12);
    // Loop over all inputs
    for (auto& line : inputs)
    {
        // Loop over all bits
        for (size_t i = 0; i < line.size(); ++i)
        {
            int bit = line[i] - '0';
            if (bit == 1)
                bits_counter[i]++;
        }
    }

    string gamma_string;
    string epsilon_string;

    for (size_t i = 0; i < bits_counter.size(); ++i)
    {
        cout << bits_counter[i] << endl;
        if (static_cast<double>(bits_counter[i]) > static_cast<double>(inputs.size()) * 0.5)
        {
            gamma_string.append("1");
            epsilon_string.append("0");
        }
        else
        {
            gamma_string.append("0");
            epsilon_string.append("1");
        }
    }

    cout << gamma_string << " " << epsilon_string << endl;

    int gamma_dec = binaryToDecimal(stoll(gamma_string));
    int epsilon_dec = binaryToDecimal(stoll(epsilon_string));

    cout << gamma_dec << " " << epsilon_dec << endl;

    cout << "Answer a: " << gamma_dec * epsilon_dec << endl;
    cout << "Answer b: " << 0 << endl;

    return 0;
}
