#include <iostream>

using namespace std;
int LCM(int , int );

int main() {
    int n1, n2, lcm;
    cout << "Enter two numbers: "<<endl;
    cin >> n1 >> n2;
    lcm = LCM(n1, n2);
    cout << "LCM = " << lcm;

    return 0;
}

int LCM(int a, int b)
{
    int lcm, gcd;
      // swapping variables b and a if a is greater than b.
    if ( a > b)
    {   
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = 1; i <=  a; ++i)
    {
        if (a % i == 0 && b % i ==0)
        {
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;
    return lcm;
}