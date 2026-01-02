// Ticket Price Eligibility
#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age < 12 || age > 65)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
