#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    int c, l;
    int a, b;


    cout << "How many lines you want to have??" << endl;
    cin >> l;
    cout << "How many columns you want to have??" << endl;
    cin >> c;
    int** mat = new int*[l];
    for (int i = 0; i < l; i++)
    {
        mat[i] = new int[c];
    }
    cout << "Provide your values" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << "Filling in the " << i+1 << " line."<<endl;
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Your matrix : " << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j]<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += mat[i][j];
        }
    }
    cout <<"Sum of all the elements : "<< sum << endl;

    cout << "Choose a line" << endl;
    cin >> a;
    cout << "Choose a column" << endl;
    cin >> b;
    
    cout <<"The element with indexes "<<a<<" and "<<b<<" is "<<mat[a-1][b-1] <<endl;

    return 0;
}

