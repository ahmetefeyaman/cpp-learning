#include <iostream>
#include <vector>
using namespace std;

void diziTopla(int n, int* ptr) {
    int i;
    int toplam = 0;
    for (i = 0; i < n; i++) {
        toplam += *(ptr + i);
     }
    cout << "toplam=" << toplam << endl;
}
   

int main(){
    int i,n;
    cout << "dizi boyutunu gir" << endl;
    cin >> n;
    vector<int> dizi(n);
    int* ptr = &dizi[0];
    cout << "dizi elemanlarini gir." << endl;
    for (i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }
    diziTopla(n,ptr);

       return 0;
}
