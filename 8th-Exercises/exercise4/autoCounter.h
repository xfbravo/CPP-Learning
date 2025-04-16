#ifndef AUTOCOUNTER_H
#define AUTOCOUNTER_H
#include <iostream>
#include <set> // Standard C++ Library container
#include <string>
class AutoCounter
{
    static int count;
    int id;
    std::string className;
    class CleanupCheck
    {
        std::set<AutoCounter *> trace;

    public:
        void add(AutoCounter *ap)
        {
            trace.insert(ap);
        }
        // 找不到require.h头文件，注释掉,在原英文书中找不到
        //  void remove(AutoCounter *ap)
        //  {
        //      require(trace.erase(ap) == 1,
        //              "Attempt to delete AutoCounter twice");
        //  }
        //  ~CleanupCheck()
        //  {
        //      std::cout << "~CleanupCheck()" << std::endl;
        //      require(trace.size() == 0,
        //              "All AutoCounter objects not cleaned up");
        //  }
    };
    static CleanupCheck verifier;
    AutoCounter(const std::string &className) : id(count++), className(className)
    {
        verifier.add(this); // Register itself
        std::cout << "created[" << id << "] for class " << className << std::endl;
    }
    // Prevent assignment and copy-construction:
    AutoCounter(const AutoCounter &);
    void operator=(const AutoCounter &);

public:
    // You can only create objects with this:
    static AutoCounter *create(const std::string &className)
    {
        return new AutoCounter(className);
    }
    // ~AutoCounter()
    // {
    //     std::cout << "destroying[" << id
    //               << "]" << std::endl;
    //     verifier.remove(this);
    // }
    // Print both objects and pointers:
    friend std::ostream &operator<<(
        std::ostream &os, const AutoCounter &ac)
    {
        return os << "AutoCounter " << ac.id;
    }
    friend std::ostream &operator<<(
        std::ostream &os, const AutoCounter *ac)
    {
        return os << "AutoCounter " << ac->id << " for class " << ac->className;
    }
};
#endif // AUTOCOUNTER_H ///:~