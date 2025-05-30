#include <iostream>
#include <string>
using namespace std;
 void fun(string);
    

int main() {
    string text, rev;
    cout << "Enter a word: ";
    cin >> text;
     fun(text);
    return 0;
}
 void fun(string text) {
    string rev = "";

    for (int i = text.size() - 1; i >= 0; i--) {
        rev += text[i];
    }

    if (text == rev)
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";
    }
  
