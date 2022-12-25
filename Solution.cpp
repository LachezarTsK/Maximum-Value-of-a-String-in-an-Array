
#include <vector>
#include <string>
using namespace std;

class Solution {
    
public:
    int maximumValue(const vector<string>& input) const {
        int maxValue = 0;
        for (const auto& current : input) {
            maxValue = max(maxValue, calculateValue(current));
        }
        return maxValue;
    }

    int calculateValue(const string& input) const {
        int digitPlace = 1;
        int currentValue = 0;

        for (size_t i = input.length() - 1; i != variant_npos; --i) {
            if (!isdigit(input[i])) {
                currentValue = input.length();
                break;
            }
            currentValue += (input[i] - '0') * digitPlace;
            digitPlace *= 10;
        }
        return currentValue;
    }
};
