#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct araba {
    string marka;
    int yil;
    double fiyat;
};

int main(){
    araba a1[3];
    int i;
    for (i = 0; i < 3; i++) {
    cout << "Marka: ";
    getline(cin, a1[i].marka);
    cout << "\nYil: ";
    cin >> a1[i].yil;
    cout << "\nfiyat: ";
    cin >> a1[i].fiyat;
    cin.ignore();
    }
    double max = a1[0].fiyat;
    for (i = 0; i < 3; i++) {
        cout << "\nMarka: " << a1[i].marka;
        cout << "\nYil: " << a1[i].yil;
        cout << "\nfiyat: " << a1[i].fiyat;
     }
    for (i = 0; i < 3; i++) {
        if (max < a1[i].fiyat) {
            max = a1[i].fiyat;
        }
    }
    cout << "\nEn Pahali Araba:" << max << endl;


       return 0;
}
