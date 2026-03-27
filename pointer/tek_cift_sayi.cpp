#include <iostream> 
#include <vector>
using namespace std;
void tek_cift_sayilar(int* ptr, int n) {
    int i, tek_sayisi=0, cift_sayisi=0; 
    for (i = 0; i < n; i++) { 
        if (*(ptr + i) % 2 == 0) { 
            cift_sayisi++; 
    } 
        else tek_sayisi++; 
    } 
    cout << "tek ve cift sayisi sirasiyla" << endl << tek_sayisi << endl << cift_sayisi << endl; 
}
int main(){ 
    int i, n; 
    cout << "dizideki eleman sayisini giriniz" << endl; 
    cin >> n; 
    vector<int>dizi(n); 
    int* ptr = &dizi[0]; 
    cout << "dizideki elemanlari giriniz" << endl; 
    for (i = 0; i < n; i++) { 
        cin >> *(ptr + i); 
    }
    tek_cift_sayilar(ptr,n); 
         return 0; 
}
