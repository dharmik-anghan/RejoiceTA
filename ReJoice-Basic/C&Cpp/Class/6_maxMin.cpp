//Problem: Write a program to find the largest and smallest elements in an array
#include <bits/stdc++.h>
using namespace std;
class MaxMin{
    private:
        int x[6], max, min;
    public:
        MaxMin(){ x[6] = {0};}
        
        //take input from user
        void inputNum()
        {
            cout<<"Input 6 Numbers: ";
            for(int i = 0; i < 6; i++)
                cin>>x[i];
        }

        //find max num and return value
        int maxNum(){
            max = x[0];

            for(int i = 1; i < 6; i++)
            {
                if(max < x[i])
                    max = x[i];
            }
            return max;
        }
        //find min number and return value
        int minNum(){
            min = x[0];

            for(int i = 1; i < 6; i++)
            {
                if(min > x[i])
                    min = x[i];
            }
            return min;
        }
};

int main()
{
    MaxMin m;

    m.inputNum();
    cout<<"Max = "<<m.maxNum()<<" Min = "<<m.minNum()<<endl;

    return 0;
}