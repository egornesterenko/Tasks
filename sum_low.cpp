//
//  main.cpp
//  Arr
//
//  Created by Mac on 2/17/18.
//  Copyright © 2018 Mac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;



long sumTwoSmallestNumbers(vector<int> numbers) {

vector<int> mas2(numbers);

        bool swapp = true;
        while(swapp)
        {
            swapp = false;
            for (int i = 0; i < mas2.size()-1; i++)
            {
                if (mas2[i]>mas2[i+1] )
                {
                    mas2[i] += mas2[i+1];
                    mas2[i+1] = mas2[i] - mas2[i+1];
                    mas2[i] = mas2[i+1];
                    swapp = true;
                }
            }
        }
   
    long num = mas2[0] + mas2[1];

    return num;
};

int main() {
    vector<int> arr = {5, 8, 12, 19, 22};
    cout << sumTwoSmallestNumbers(arr) << endl;
    return 0;
                 }
