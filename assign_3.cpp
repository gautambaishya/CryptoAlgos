#include<iostream>

using namespace std;

int exp(int x, int y, int n)
{
    int ans=1;
    while(y>0)
    {
        if(y%2 != 0)
        {
            ans =(ans*x)%n;
            y -= 1;
        }
        x=(x*x)%n;
        y= y/2;
    }
    return ans;
}

int main()
{
    int x,y,n;
    cout <<"Enter x ";
    cin >> x;
    cout <<"Enter y: ";
    cin >> y;
    cout <<"Enter N: ";
    cin >> n;
    int ans = exp(x,y,n);
    cout << "x^y mod N = " << ans << "\n";
}
