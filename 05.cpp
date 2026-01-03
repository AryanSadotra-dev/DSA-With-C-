//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
#include<iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the number n: ";
    cin >> n;   // fixed count for A–Z and a–z
    char small, capital;
    int i = 0;

    // Print Capital letters A-Z
    while (i < n) {
        capital = i + 'A';
        cout << capital << " ";
        i++;
    }

    cout << endl;

    // Reset for small letters
    i = 0;
    while (i < n) {
        small = i + 'a';
        cout << small << " ";
        i++;
    }

    return 0;
}
