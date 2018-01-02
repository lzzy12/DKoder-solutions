#include <iostream>
#include <string>
using namespace std;
int main()
{
        string input;
        cout << "Enter the string : ";
        getline(cin, input);
        cout << endl << "String without alterations: " << input;
        input[0] = toupper(input[0]);
        for (string::size_type i = 1; i < input.size(); i++){
                if (input[i] == ' ' && islower(input[i]))
                input[i + 1] = toupper(input[i + 1]);
}
        cout << endl << "Final string : " << input << endl;
        return 0;
