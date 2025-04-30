#include <iostream>
#include <chrono>
using namespace std;

void func1(long n, long &sum1)
{
    sum1 += n;
}

inline void func2(long n, long &sum2)
{
    sum2 += n;
}

int main()
{
    long sum1 = 0, sum2 = 0;

    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; i++)
    {
        func1((long)i, sum1);
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Time taken by func1: "<< chrono::duration<double>(end - start).count() << " seconds" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; i++)
    {
        func2((long)i, sum2);
    }
    end = chrono::high_resolution_clock::now();
    cout << "Time taken by func2: "<< chrono::duration<double>(end - start).count() << " seconds" << endl;

    return 0;
}