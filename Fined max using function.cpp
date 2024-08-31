#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

double findMax(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = findMax(10, 20);
    cout << "Maximum of 10 and 20 : " << intMax <<endl;

    double doubleMax = findMax(15.5, 10.8);
    cout << "Maximum of 15.5 and 10.8 : " << doubleMax <<endl;
}

