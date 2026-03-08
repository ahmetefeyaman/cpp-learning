#include <iostream>
#include <vector>
using namespace std;

int pozitif_toplam(vector<int> dizi) {
    int i, toplam = 0;
    for (i = 0; i < dizi.size(); i++) {
        if (dizi[i] > 0) {
            toplam += dizi[i];
        }
     }
    return toplam;
}

int main(){
    int n, i;
    cout << "dizi boyutunu giriniz." << endl;
    cin >> n;
    vector<int>dizi(n);
    cout << "sayi degerlerini giriniz." << endl;
    for (i = 0; i < dizi.size(); i++) {
        cin >> dizi[i];
    }
    int sonuc = pozitif_toplam(dizi);
    cout << "Pozitif sayilarin toplam: " << sonuc << endl;

       return 0;
}

