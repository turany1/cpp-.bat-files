#include <iostream>

using namespace std;
int main()
{
    int sum = 0;
    int n;
    int idx;
    cout << "How many elemets you want to write??" << endl;
    cin >> n;
    int* array = new int[n];
    cout << "Provide your values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
 
    cout << "The first element is : " << array[0] << endl;

    cout << "The contents of the array : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Difference between the last and the first elements : " << array[n-1] - array[0]<<endl;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    cout << "Sum : " << sum << endl;

    cout << "Which value you want to get?" << endl;
    cin >> idx;
    cout << "The " << idx << "value is : " << array[idx - 1]<<endl;
    return 0;
}

