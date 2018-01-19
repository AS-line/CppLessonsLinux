#include <iostream>
using namespace std;
// changes for git checkout
// second change for git checkout
class Test {
private:
    int a, b, c;
public:
    void set(int a, int b, int c) {
        this->a = a; //вместо a = a_a;
        this->b = b; //вместо b = b_b;
        this->c = c; //вместо c = c_c;
    }
    void get() {
        cout << "A=" << a << "  B=" << b << "  C=" << c << endl;
    }
};

int main()
{
    Test obj;
    obj.set(12, 13, 14);
    obj.get();
    return 0;
}
