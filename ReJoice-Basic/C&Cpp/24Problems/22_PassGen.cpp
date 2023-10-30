#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class PasswordGenerator
{
private:
    string password = "";
    string uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
    string numberChars = "0123456789";
    string specialChars = "!@#$%^&*()_+-=[]{}|;:,.<>?";

public:
    void generatePassword(int length, bool includeUppercase, bool includeLowercase, bool includeNumbers, bool includeSpecialChars)
    {
        string validChars = "";
        if (includeUppercase)
            validChars += uppercaseChars;
        if (includeLowercase)
            validChars += lowercaseChars;
        if (includeNumbers)
            validChars += numberChars;
        if (includeSpecialChars)
            validChars += specialChars;

        if (validChars.empty())
        {
            cout << "Error: No character type selected. Please choose at least one type.\n";
            return;
        }

        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < length; i++)
        {
            int randomIndex = rand() % validChars.length();
            password += validChars[randomIndex];
        }
    }

    void showPassword()
    {
        cout << "Password: " << password << endl;
    }
};

int main()
{
    PasswordGenerator p;

    // Generate a 12-character password with uppercase letters, lowercase letters, numbers, and special characters
    p.generatePassword(12, true, true, true, true);
    p.showPassword();

    return 0;
}
