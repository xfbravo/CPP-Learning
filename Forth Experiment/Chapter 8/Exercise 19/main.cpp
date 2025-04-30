#include <iostream>

using namespace std;
class Test{
public:
    float f1=1.0;
    const float f2=2.0;
    Test(float f1){
        this->f1=f1;
    }
};
int main() {
    Test t(10);
    cout << t.f1 << endl; // 10.0
    cout << t.f2 << endl; // 2.0    
    return 0;
}