

#include <iostream>
using namespace std;

class HiddenSeq
{
public:
    static unsigned long long fcn(int n) {
        long long num = 0;
        if (n == 0) { return 1;
        }
        else if (n>0) {return num = fcn(n-1)*2;}
        return num;
        
    };
};

int main() {
    HiddenSeq obj;
    cout << obj.fcn(7);
    cin.get();
    return 0;
}


