#include<iostream>

using namespace std;

int main(){
    int* a = new int(10);
    long* b = new long(20);
    char* c = new char[100];
    for(int i = 0; i < 99; i++){
        c[i] = 'a' + i % 26;
    }
    c[99] = '\0'; // Null-terminate the string
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << c << endl;
    delete a;
    delete b;
    delete[] c; // Use delete[] for arrays
    return 0;
}