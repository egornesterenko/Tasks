class Kata
{
public:
    int countInversions(std::vector<int> array)
    {
        int counter = 0;
        bool swapp = true;
        while(swapp)
        {
            swapp = false;
            for (int i = 0; i+1 < array.size(); i++)
            {
                if (array[i]>array[i+1] )
                {   counter++;
                    int tem = array[i];
                    array[i] = array[i+1];
                    array[i+1] = tem;
                    swapp = true;
                }
            }
            if (array.size() == 0) {return counter;}
            
        };
        return counter;
    }
};
