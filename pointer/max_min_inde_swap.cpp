#include <iostream>
#include <vector>
using namespace std;

void min_max_degistir(int* p, int n) {
    int i,temp;
    int min_index = 0;
    int max_index = 0;
    for (i = 0; i < n; i++) {
        if (*(p+min_index) > *(p + i)) {
            min_index = i;
        }
        if (*(p+max_index) < *(p + i)) {
            max_index = i;
        }
    }
    temp = *(p+max_index);
    *(p+max_index) = *(p+min_index);
    *(p+min_index) = temp;
}


int main(){
    int i, n;
    cout << "dizideki eleman sayisini giriniz." << endl;
    cin >> n;
    vector<int>dizi(n);
    int* p = &dizi[0];
    cout << "dizinin elemanlarini giriniz." << endl;
    for (i = 0; i < n; i++) {
        cin >> *(p + i);
    }
    cout << "ilk dizi" << endl;
    for (i = 0; i < n; i++) {
    cout << (dizi[i]);
    }
    min_max_degistir(p, n);
    cout << endl <<"yeni dizi" << endl;
    for (i = 0; i < n; i++) {
        cout << *(p+i);
    }
       return 0;
}
