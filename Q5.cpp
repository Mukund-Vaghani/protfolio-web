#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "This is a vowel character :" << ch;
    }
    else
    {
        cout << "This is a Consonant character :" << ch;
    }

    return 0;
}