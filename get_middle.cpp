#include <iostream>
#include <string>
using namespace std;

char get_middle(string input)
{   int num = (int) input.length();
    int one = num / 2;
    if (num % 2 == 1) {
        return input [one];
    }
    else { return 0 ;
    }
    
}


int main() {
    cout << get_middle("hkdsk") << endl;
    cin.get();
    return 0;
}
