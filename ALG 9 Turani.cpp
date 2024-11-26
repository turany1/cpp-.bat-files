#include <iostream>

using namespace std;
int main()
{

    int matrix[4][4] = {{5, 7, 13, 22}, 
                        {88, 100, 3, 2}, 
                        {33, 7, 2, 3}, 
                        {7, 3, 15, 2}};

    int key;
    cout << "Write your key" << endl;
    cin >> key;

    for (int i = 1; i < 3 ; i++)
    {
        for (int j = 1;  j < 4; j++)
        {
            if (matrix[i][j] == key)
            {
                cout << key << " is under indexes " << i << " and " << j << endl;
            }
        }
    }

    return 0;
}
