// https://www.codechef.com/AM19MOS/problems/USANBOLT

#include <iostream>
#include <cmath>
#define s std::

int main(void)
{
    unsigned t, f, disToBolt, tiAcc, boltSp;
    double timeTakenByBolt, timeTakenByTiger;

    s cin >> t;

    while (t--)
    {
        s cin >> f >> disToBolt >> tiAcc >> boltSp;

        timeTakenByBolt = (double)f / boltSp;
        timeTakenByTiger = sqrt(((f + disToBolt) * 2) / (double)tiAcc);

        if (timeTakenByBolt < timeTakenByTiger)
        {
            s cout << "Bolt";
        }
        else
        {
            s cout << "Tiger";
        }

        s cout << s endl;
    }
}