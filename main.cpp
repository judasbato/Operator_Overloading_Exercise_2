#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

    cout << boolalpha << endl;
    Mystring a {"battal"};
    Mystring b {"battal"};
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false

    b = "onder";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
    cout << (a<b) << endl;         // true
    cout << (a>b) << endl;          // false

    Mystring s1 {"BATTAL"};
    s1 = -s1;
    cout << s1 << endl;             // battal

    s1 = s1 + "*****";
    cout << s1 << endl;             // battal*****

    s1 += "-----";                      // battal*****-----
    cout << s1 << endl;

    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;           // 123451234512345

    Mystring s3{"abcdef"};
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef

    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;

    cout << (repeat_string * 12) << endl;

    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;

    Mystring s = "Battal";
    ++s;
    cout << s << endl;                  // BATTAL

    s = -s;
    cout << s << endl;                  // battal
    Mystring result;
    result = ++s;
    cout << s << endl;                  // battal
    cout << result << endl;           // BATTAL

    s = "Battal";
    s++;
    cout << s << endl;                  // BATTAL

    s = -s;
    cout << s << endl;                  // battal
    result = s++;
    cout << s << endl;                  // BATTAL
    cout << result << endl;           // battal
    return 0;
}
