#include<iostream>
#include<iomanip>
using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main(){
    int a = 5, b = 10;
    double x = 5.5, y = 10.5;
    cout << "Integer addition: "<<right<<setw(4)<< add(a, b) << endl; // Calls add<int>(int, int)
    cout << "Double addition: " <<fixed<<setprecision(3)<< add(x, y) << endl; // Calls add<double>(double, double)
    return 0;
}