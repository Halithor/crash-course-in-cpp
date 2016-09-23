
#include <iostream>
#include <cmath>

using namespace std;

int f(int input);

int main(int argc, char * argv[]) {  
    int const length = 100;
    int values[length];
    for (int i = 0; i < length; i++) {
        values[i] = f(i);
    }
    cout << values << endl;
    for (int i = 0; i < length; i++) {
        cout << values[i] << "\t";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    return 0;
}

int f(int input) {
    return pow(input, 2) + (3 * input) + 5;
}