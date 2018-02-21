#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>

using namespace std;


class Kata
{
public:
    vector<string> towerBuilder(int nFloors)
    {string floor ((nFloors*2), ' ');
        vector<string> one;
        for (int i = 0; i <= nFloors; i++) {
            one.push_back(floor);
            long center = one[i].length() / 2 ;
            floor.replace(center + i, 1, "*");
            floor.replace(center - i, 1, "*");
            one[i].erase(0,1);
        }
        one.erase(one.begin() );
        return one;
        
        
    }
};




int main() {
    
    Kata kata;
    vector<string> ff = kata.towerBuilder(3);
    copy(ff.begin(), ff.end(), ostream_iterator<string>(cout, "\n"));
    return 0;
}
