#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<int> s;

    // 插入元素
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1); // 重复元素不会插入

    // 遍历元素（自动排序）
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n--------------------" << endl;
    // 查找元素
    if (s.find(3) != s.end())
    {
        cout << "Found 3" << endl;
    }

    int iarray[50];
    iarray[20] = 10;
    int *ip = find(iarray, iarray + 50, 10);
    if (ip != iarray + 50)
    {
        cout << "Found 10 at index: " << ip - iarray << endl;
    }
    else
    {
        cout << "10 not found" << endl;
    }
    cout << "--------------------" << endl;

    vector<int> intVector(50);
    intVector[20] = 10;
    vector<int>::iterator ip2 = find(intVector.begin(), intVector.end(), 10);
    if (ip2 != intVector.end())
    {
        cout << "Found 10 at index: " << ip2 - intVector.begin() << endl;
    }
    else
    {
        cout << "10 not found" << endl;
    }
    return 0;
}