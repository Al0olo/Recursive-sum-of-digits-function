#include <iostream>
#include <vector>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int sumofdigit(int n,int &x) {
    int digit = n % 10;
    n /= 10;
    x+= digit;
    if (n > 0)
        return sumofdigit(n, x);
    return x;
    
    
}

int main()
{
    fastread();
    
    int number;
    cin >> number;
    int SumOfDigits = 0;
    sumofdigit(number, SumOfDigits);
    cout << SumOfDigits;
    return 0;
}
