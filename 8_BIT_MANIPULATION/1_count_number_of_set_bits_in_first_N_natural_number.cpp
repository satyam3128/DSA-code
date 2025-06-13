// Brute Force Approch
#include <iostream>
using namespace std;
int count_set_bit(int num)
{
    int count = 0;
    while (num)
    {
        int rem = num % 2;
        num = num / 2;
        if (rem == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter the Number :";
    cin >> num;

    int count_one = 0;
    for (int i = 1; i <= num; i++)
    {
        count_one = count_one + count_set_bit(i);
    }
    cout<<"Set Bits Cout:"<<count_one;

    return 0;
}
