#include <iostream>

using namespace std;
int main()
{
    int array[8] = { 28,1,8,10,20,9,9,5 };
    int buff;
    


    for (int i = 0; i < 8;i++)
    {
        for (int j= 0; j < 8-i-1;)
        {
            if (array[j]>array[j+1])
            {
                buff  = array[j];
                array[j] = array[j + 1];
                array[j + 1] = buff;
                j++;
            }
            else
            {
                j++;
            }
        }
    
     
    }

    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
    system("pause");
    return 0;
}
