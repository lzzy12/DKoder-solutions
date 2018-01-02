#include <iostream>
using namespace std;
int main()
{
        int age[5], elder = 0;
        cout << "Enter the ages : ";
        for (int i = 0; i < 5; i++) {
        cin >> age[i];
        }
        for (int u = 0; u <= 4; u++){
        if (age[u] > elder)
                elder = age[u];
        }
        cout << endl << "Highest age is " << elder << endl;
        return 0;
}
