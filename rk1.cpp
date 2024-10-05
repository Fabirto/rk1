#include <iostream>
using namespace std;
int main()
{
    double sum = 0;
    for (int i = 1; i<6; ++i) {
        double mult = 1;
        for (int j = 1; j<i+1; ++j) {
            mult = mult * j;
        }
    sum+=(1/mult);

    }
cout << sum;
}