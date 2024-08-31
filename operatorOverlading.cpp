#include <iostream>
using namespace std;

class Test
{
    private:
        int a = 0;

    public:
    Test()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }

    void print(const string &operation)
    {
        cout << "The value of a after " << operation << " is: " << a << endl;
    }

    void operator +=(int b)
    {
        a += b;
        print("addition");
    }

    void operator -=(int b)
    {
        a -= b;
        print("subtraction");
    }

    void operator *=(int b)
    {
        a *= b;
        print("multiplication");
    }

    void operator /=(int b)
    {
        a /= b;
        print("division");
    }

    void operator %=(int b)
    {
        a %= b;
        print("modulus");
    }
};

int main() {
    Test ob1;

    ob1 += 10;  // Addition
    ob1 -= 5;   // Subtraction
    ob1 *= 3;   // Multiplication
    ob1 /= 4;   // Division
    ob1 %= 5;   // Modulus

    return 0;
}