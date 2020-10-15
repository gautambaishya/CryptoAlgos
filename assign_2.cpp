#include<iostream>

using namespace std;

int exp(int x, int y, int n)
{
    int ans = 1;
    for(int i=0; i<y; i++)
    {
        ans = (ans*x)%n;
    }
    return ans;
}

int main()
{
    int x,y,n;
    cout <<"Enter x: ";
    cin >> x;
    cout <<"Enter y: ";
    cin >> y;
    cout <<"Enter N: ";
    cin >> n;
    int ans = exp(x,y,n);
    cout << "x^y mod N = " << ans << "\n";
}
