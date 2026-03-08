#include <iostream>
#include <vector>
using namespace std;
 
int tek_kare_toplam(vector<int>dizi) {
    int toplam = 0, i,kare;
    for (i = 0; i < dizi.size(); i++) {
        if (dizi[i] > 0 && dizi[i] % 2 == 1) {
            kare = dizi[i] * dizi[i];
            toplam += kare;
        }
    }
    return toplam;
}

int main(){
    int n,i, toplam = 0;
    cout << "dizi boyutunu giriniz" << endl;
    cin >> n;
    vector<int>dizi(n);
    cout << "dizi degerlereini girin." << endl;
    for (i = 0; i < dizi.size(); i++) {
        cin >> dizi[i];
    }
    int sonuc = tek_kare_toplam(dizi);
    cout << "Dizideki tek ve pozitif sayilarin toplami: " << sonuc <<endl;

       return 0;
}
