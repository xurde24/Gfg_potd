
class Solution {
public:
    bool isValid(string s) {
        return s.length() == 1 || s[0] != '0';
    }

    string addStrings(string a, string b) {
        string result;
        int carry = 0, i = a.size() - 1, j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }

    bool check(string s, string a, string b) {
        string sum = addStrings(a, b);
        if (s == sum) return true;
        if (s.size() < sum.size() || s.substr(0, sum.size()) != sum) return false;
        return check(s.substr(sum.size()), b, sum);
    }

    bool isSumString(string s) {
        int n = s.length();
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n - i; j++) {
                string a = s.substr(0, i);
                string b = s.substr(i, j);

                if (!isValid(a) || !isValid(b)) continue;

                if (check(s.substr(i + j), a, b)) return true;
            }
        }
        return false;
    }
};


