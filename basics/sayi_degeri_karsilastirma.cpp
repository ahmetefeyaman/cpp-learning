#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "degerleri gir ve buyuk degeri goster." << endl;
    cin >> a >> b;
    if (a > b)
        cout << "A" << endl;
    else if (b > a)
        cout << "B" << endl;
    else
        cout << "EQUAL" << endl;
    return 0;
}
