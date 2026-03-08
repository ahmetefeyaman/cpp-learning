#include <iostream>
using namespace std;

int main() {
    int x, y, mutlakfark;
    cout << "yaslari giriniz" << endl;
    cin >> x >> y;
    if (x > y)
        mutlakfark = x - y;
    else
        mutlakfark = y - x;
    cout << "Mutlak fark : " << mutlakfark << endl;

    return 0;
}
