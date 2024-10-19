#include <iostream>
using namespace std;

int binary(int num)
{
    int ans = 0, pow = 1;
    while(num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        ans += pow * rem;
        pow *= 10;
    }
    return ans;
}

int main()
{
    int num = 32;
    cout << "num: " << binary(num) << endl;
    return 0;
}

