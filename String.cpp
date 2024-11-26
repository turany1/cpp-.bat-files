#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    ifstream fin;
    char temp;
    fin.open("ode to joy.txt");
    string text;
    string result;
    if (!fin) {
        cout << "error!";
        system("Pause");
        return 1;
    }
    int i = 0;
    int s = 0;
    while (fin >> text) 
    {   
        for (int i = 0;i < text.size();i++)
        {
            temp = text[i];
            if (temp != '*')
            {
                result += temp;
            }
            else
            {
                s++;
            }
        } 
        result += ' ';
    }
    result += "                                                                                             Ludwik van Beethoven";
    cout << s<<endl;
    fstream file;

    
    file.open("result.txt",ios_base::out);
    file << result;
    file.close();

    return 0;

}

