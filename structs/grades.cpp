#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ogrenci {
    string isim;
    int vize;
    int final;
    double ortalama;
};
void ort_max(vector<ogrenci>o) {
    int i, n = o.size();
    int max_index = 0;
    for (i = 0; i < n; i++) {
        o[i].ortalama = o[i].vize * 0.4 + o[i].final * 0.6;
    }
double max = o[0].ortalama;
for (i = 0; i < n; i++) {
if (max < o[i].ortalama) {
    max = o[i].ortalama;
    max_index = i;
  }
}
cout << "\nEN YUKSEK ORTALAMALI OGRENCI\n";
cout << "ISIM:" << o[max_index].isim << endl;
cout << "ORTALAMA:" << o[max_index].ortalama << endl;

}
int main(){
    int i,n;
    cout << "kisi sayisi giriniz\n";
    cin >> n;
    vector<ogrenci>o1(n);
    cin.ignore();
    for (i = 0; i < n; i++) {
        cout << "ISIM:";
        getline(cin,o1[i].isim);
        cout << "\nVIZE:";
        cin >> o1[i].vize;
        cout << "\nFINAL:";
        cin >> o1[i].final;
        cin.ignore();
    }
    ort_max(o1);
 

       return 0;
}
