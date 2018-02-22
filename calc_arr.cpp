
#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Kata
{
public:
    int countInversions(vector<int> array)
    {
        int counter = 0;
        bool swapp = true;
        while(swapp)
        {swapp = false;
            for (int i = 0; i < array.size()-1; i++)
            {
                if (array[i]>array[i+1] )
                {counter++;
                    array[i] += array[i+1];
                    array[i+1] = array[i] - array[i+1];
                    array[i] = array[i+1];
                    swapp = true;
                    
                };
                
            } }
        return counter;
    }
};

int main() {
    Kata one;
    one.countInversions({2,1,4,3,5});
    
}
