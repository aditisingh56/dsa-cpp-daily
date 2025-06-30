#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

bool hasUppercase(const string &password) {
    for (char ch : password)
        if (isupper(ch)) return true;
    return false;
}

bool hasLowercase(const string &password) {
    for (char ch : password)
        if (islower(ch)) return true;
    return false;
}

bool hasDigit(const string &password) {
    for (char ch : password)
        if (isdigit(ch)) return true;
    return false;
}

bool hasSpecialChar(const string &password) {
    string special = "!@#$%^&*()-_=+[]{}|;:',.<>?/~`";
    for (char ch : password)
        if (special.find(ch) != string::npos) return true;
    return false;
}

bool hasNoRepeat(const string &password) {
    unordered_set<char> seen;
    for (char ch : password) {
        if (seen.count(ch)) return false;
        seen.insert(ch);
    }
    return true;
}

string evaluateStrength(const string &password) {
    int score = 0;
    if (password.length() >= 8) score++;
    if (hasUppercase(password)) score++;
    if (hasLowercase(password)) score++;
    if (hasDigit(password)) score++;
    if (hasSpecialChar(password)) score++;
    if (hasNoRepeat(password)) score++;

    if (score <= 2) return "Weak";
    else if (score <= 4) return "Medium";
    else return "Strong";
}

int main() {
    string password;
    cout << "🔐 Enter your password: ";
    getline(cin, password);

    cout << "\nPassword analysis:\n";

    cout << (password.length() >= 8 ? "✔" : "✖") << " Length >= 8\n";
    cout << (hasUppercase(password) ? "✔" : "✖") << " Contains uppercase letter\n";
    cout << (hasLowercase(password) ? "✔" : "✖") << " Contains lowercase letter\n";
    cout << (hasDigit(password) ? "✔" : "✖") << " Contains digit\n";
    cout << (hasSpecialChar(password) ? "✔" : "✖") << " Contains special character\n";
    cout << (hasNoRepeat(password) ? "✔" : "✖") << " No repeated characters\n";

    string result = evaluateStrength(password);
    cout << "\n✅ Password Strength: " << result << "\n";

    return 0;
}
