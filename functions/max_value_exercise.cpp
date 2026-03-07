//Max Value Exercise
#include <iostream>
using namespace std;

int max_value(int a, int b, int c) {
 int  max = a;
    if (b > max){
            max = b;
    }
    if (c > max) {
        max = c;
    }
     return max;
}

int main(){
    int max,x, y, z;
    cout << "Enter the numbers,please!" << endl;
    cin >> x >> y >> z;
    max = x;
    int result = max_value(x, y, z);
    cout << "The biggest number is  " << result << endl;

       return 0;
}

