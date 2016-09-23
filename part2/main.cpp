
#include <iostream>
#include <ctime>

using namespace std; // Hey this is a comment!

int gcd(int a, int b);\
int fib(int n);

int main(int argc, char* argv[]) {
    bool b = true;
    char ch = 's';
    int number = 10;
    double number2 = 5.5;
    cout << ch << endl << number << "\n" << number2 << endl;


    int result = number2 * 1.5;
    cout << "Result is " << result << endl;


    cout << gcd(9, 12) << endl;
    cout << "Fib" << endl;
    cout << fib(7);
    cout << "The remained is " << 17 % 3 << endl;
    time_t t = time(0);
    cout<< t << endl;

    cout << sizeof(int) << " | " << sizeof(char) << " | " << sizeof(time_t) << " | " << sizeof(bool);
    return 0;
}

// Will find the greatest common denominator of a & b.
int gcd(int a, int b) {
    while (a != b) {
        if (a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
    }
    return a;
}

int gcd2(int a, int b) {
    if (a == b) {
        return a;
    }

    if (a < b){
        return gcd2(a, b - a);
    } else {
        return gcd2(a - b, b);
    }
}

// Finds the nth fibonacci number.
int fib(int n) {
    if (n <= 1) {
        return 1;
    }

    return fib(n-1) + fib (n-2);

}