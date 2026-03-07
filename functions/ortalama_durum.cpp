#include <iostream>
#include <vector>
using namespace std;

double ort_hesapla(const vector<int>& dizi){
    int i,toplam = 0;
        for (i = 0; i < dizi.size() ; i++) {
        toplam += dizi[i];
     }

     return (double)toplam / dizi.size();
}

int main(){
    int i,n,toplam = 0;
    cout << "Not adedini giriniz." << endl;
    cin >> n;
    
    vector<int> dizi(n);
    cout << "Not degerlerini giriniz." << endl;
    for (i = 0; i < n; i++) {
            cin >> dizi[i];
        if (dizi[i] < 0 || dizi[i] > 100) {
            return 1;
        }
    }
    double ortalama = ort_hesapla(dizi);
    if (ortalama >= 50 && ortalama <= 100){
        cout << "Gecti!" << ortalama << endl;
    }
    else if (ortalama >= 0 && ortalama < 50) {
        cout << "Kaldi!" << ortalama << endl;
    }
    else {
        cout << "Gecersiz";
    }
  
       return 0;
}

