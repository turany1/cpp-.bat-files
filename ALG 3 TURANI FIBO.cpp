#include <iostream>

int fibo(int a);

using namespace std;
int main()
{
    int f;
    cout << "Provide a value" << endl;
    cin >> f;
    cout << endl << "Result : " << fibo(f) << endl;
}

int fibo(int a)
{
    if (a <= 1) 
    {
        return a;
    }
    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    }


}

