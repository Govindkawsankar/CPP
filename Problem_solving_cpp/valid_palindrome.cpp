#include <iostream>
#include <string>
using namespace std;

bool valid_char(char ch) {
    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z')) {
        return 1;
    }

    return 0;
}

char get_lower(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    else {
        return ch;
    }
}

bool check_palindrome(string a) {
    int start = 0;
    int end = a.length() - 1;

    while (start < end) {
        if (a[start] != a[end]) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

bool is_palindrome(string s) {
    string temp = "";

    for (int i = 0; i < s.length(); i++) {
        if (valid_char(s[i])) {
            temp.push_back(s[i]);
        }
    }

    for (int i = 0; i < temp.length(); i++) {
        temp[i] = get_lower(temp[i]);
    }

    return check_palindrome(temp);
}

int main() {
    string s = "noON";

    if (is_palindrome(s)) {
        cout << "valid palindrome" << endl;
    }
    else {
        cout << "not a valid palindrome" << endl;
    }

    return 0;
}