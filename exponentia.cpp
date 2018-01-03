#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int num;
        cout << "Enter the range: ";
        cin >> num;
        cout << endl;
        for (int i = 0; i <= num; i++)
        {
                cout << pow(2, i) << ", ";
        }
}
