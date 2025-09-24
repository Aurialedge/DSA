class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string result;

        // If result is negative
        if ((numerator < 0) ^ (denominator < 0)) {
            result += "-";
        }

        // Convert to long to handle overflow cases
        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);

        // Integer part
        result += to_string(num / den);
        long long remainder = num % den;

        if (remainder == 0) return result;

        result += ".";
        unordered_map<long long, int> remainderIndex;

        while (remainder != 0) {
            if (remainderIndex.find(remainder) != remainderIndex.end()) {
                result.insert(remainderIndex[remainder], "(");
                result += ")";
                break;
            }

            remainderIndex[remainder] = result.size();
            remainder *= 10;
            result += to_string(remainder / den);
            remainder %= den;
        }

        return result;
    }
};
