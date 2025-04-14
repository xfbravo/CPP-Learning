#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <fstream>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <deque>
#include <string>
#include <iomanip>
#include <iterator>
#include <bitset>
using namespace std;

int main()
{
    // Set
    // int s[] = {8, 2, 3, 4, 5, 6};
    // set<int> dset(s, s + sizeof(s) / sizeof(int));
    // set<int>::iterator it = dset.begin();
    // cout << "Set: ";
    // while (it != dset.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;
    // copy(dset.begin(), dset.end(), ostream_iterator<int>(cout, " "));
    // dset.insert(7);
    // cout << "\nSet after inserting 7: ";
    // for (it = dset.begin(); it != dset.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // integer array
    //  int iarray[50];
    //  iarray[20] = 10;
    //  int *ip = find(iarray, iarray + 50, 10);
    //  if (ip != iarray + 50)
    //  {
    //      cout << "Found 10 at index: " << ip - iarray << endl;
    //  }
    //  else
    //  {
    //      cout << "10 not found" << endl;
    //  }
    //  cout << "--------------------" << endl;

    // Vector
    //  vector<int> intVector(50);
    //  intVector[20] = 10;
    //  vector<int>::iterator ip2 = find(intVector.begin(), intVector.end(), 10);
    //  if (ip2 != intVector.end())
    //  {
    //      cout << "Found 10 at index: " << ip2 - intVector.begin() << endl;
    //  }
    //  else
    //  {
    //      cout << "10 not found" << endl;
    //  }

    // File I/O
    //  ofstream ofobject("test.txt", ios_base::out);
    //  if (!ofobject.is_open())
    //  {
    //      cerr << "Failed to open file" << endl;
    //      return 1;
    //  }
    //  double d1=0.5;
    //  double d2=0.6;
    //  ofobject << d1 << " " << d2 << endl;
    //  ofobject.close();
    //  cout<<"---------------------" << endl;
    //  int arr[] = {64, 34, 25, 12, 22, 11, 90};

    // Vector
    //  int i = 0;
    //  vector<int> V(10,0);
    //  for (int i = 0; i < 10; i++)
    //  {
    //      // V[i] = i + 1;
    //      V.at(i) = i + 1;
    //  }
    //  V.push_back(11);
    //  V.insert(V.begin()+3,0);
    //  *V.begin() = *(V.end() - 1);
    //  for (int i = 0;i<V.size();i++){
    //      cout << V.at(i) << " ";
    //  }

    // List
    //  list<string> fruits, vegetables;
    //  fruits.push_back("apple");
    //  fruits.push_back("banana");
    //  vegetables.push_back("carrot");
    //  vegetables.push_back("broccoli");
    //  fruits.splice(fruits.end(),vegetables,vegetables.begin(),vegetables.end());
    //  fruits.sort();
    //  cout << "Fruits: ";
    //  for (const auto& fruit : fruits) {
    //      cout << fruit << " ";
    //  }
    //  cout << "\nVegetables: ";
    //  for (const auto& vegetable : vegetables) {
    //      cout << vegetable << " ";
    //  }

    // Stack
    //  stack<string> sstack;
    //  sstack.push("I like C++ also.");
    //  sstack.push("C++.");
    //  sstack.push("You like");
    //  while(!sstack.empty()){
    //      cout << sstack.top() << " ";
    //      sstack.pop();
    //  }

    // Queue
    //  queue<string> squeue;
    //  squeue.push("I like C++ also.");
    //  squeue.push("C++.");
    //  squeue.push("You like");
    //  while(!squeue.empty()){
    //      cout << squeue.front() << " ";
    //      squeue.pop();
    //  }

    // Priority Queue
    //  priority_queue<int> iqueue;
    //  int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    //  {
    //      iqueue.push(arr[i]);
    //  }
    //  cout << "\nPriority Queue: ";
    //  while(!iqueue.empty()){
    //      cout << iqueue.top() << " ";
    //      iqueue.pop();
    //  }

    // Map
    //  map<unsigned int, string> M;
    //  M.insert(pair<unsigned int, string>(1, "one"));
    //  M.insert(pair<unsigned int, string>(2, "two"));
    //  M.insert(pair<unsigned int, string>(3, "three"));
    //  M[4] = "four";
    //  M[5] = "five";
    //  cout<<"M[4] = " << M[4] << endl;
    //  cout<<"M[5] = " << M[5] << endl;

    // map<unsigned int, string>::iterator pm;
    // for (pm = M.begin(); pm != M.end(); pm++)
    // {
    //     cout << "Key: " << pm->first << ", Value: " <<right<<setw(5)<< pm->second << endl;
    // }
    // M.erase(3);
    // cout << "After erasing key 3:" << endl;
    // for (pm = M.begin(); pm != M.end(); pm++)
    // {
    //     cout << "Key: " << pm->first << ", Value: " << pm->second << endl;
    // }

    // Bitset
    //  bitset<32> bitvec;
    //  bitvec[27] = 1;
    //  bitvec[29] = 1;
    //  //printing bitset
    //  cout << "Bitset: " << bitvec << endl;
    //  //counting number of set bits
    //  cout << "Number of set bits: " << bitvec.count() << endl;
    //  //checking if bit is set or not
    //  cout << "Bit 27 is set: " << bitvec[27] << endl;
    //  cout << "Bit 28 is set: " << bitvec[28] << endl;
    //  //setting all bits to 1
    //  bitvec.set();
    //  cout << "Bitset after setting all bits: " << bitvec << endl;
    //  //resetting all bits to 0
    //  bitvec.reset();
    //  cout << "Bitset after resetting all bits: " << bitvec << endl;
    //  //flipping all bits
    //  bitvec.flip();
    //  cout << "Bitset after flipping all bits: " << bitvec << endl;
    //  bitvec[0] = 0;
    //  bitvec.any();
    //  cout << "Bitset after none: " << bitvec << endl;

    // String
    // string str = "Hello, World!";
    // cout << str.substr(6, 6) << endl; // "Hello"
    // str.insert(6, "xf,");
    // cout << str << endl;             // "Hello, xf, World!"
    // cout << str.find("xf,") << endl; // 6
    // str.replace(6, 3, "C++,");
    // cout << str << endl; // "Hello, World!"
    // string str1 = string("Hello, World!");
    // Algorithm
    int arr[] = {64, 34, 25, 11, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    stable_sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    string str = "Hello,World!";
    string str1 = "World!";
    cout << "\nString str1 is included in str: " << includes(str.begin(), str.end(), str1.begin(), str1.end()) << endl;
    return 0;
}