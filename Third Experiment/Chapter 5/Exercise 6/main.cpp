#include <iostream>

using namespace std;

class Hen
{
public:
    class Nest
    {
    public:
        class Egg
        {
        public:
            void hatch()
            {
                cout << "The hen is hatching eggs in its nest" << endl;
            }
        };
        void NestPrint()
        {
            cout << "The hen has bulit a nest" << endl;
        }
    };
    void HenPrint()
    {
        cout << "There is a hen." << endl;
    }
};

int main()
{
    Hen hen;            // Create an instance of Hen
    Hen::Nest nest;     // Create an instance of Nest inside Hen
    Hen::Nest::Egg egg; // Create an instance of Egg inside Nest
    hen.HenPrint();     // Call the method of Hen
    nest.NestPrint();   // Call the method of Nest
    egg.hatch();        // Call the method of Egg to hatch the egg
    return 0;
}