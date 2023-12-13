#include<iostream>
using namespace std;
int main()
{
    int num[10];
    int j = 9;
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i <= 9; i++)
    {
        cin >> num[i];
    }
    cout << "The distinc numbers are:" << endl;
    cout << num[0]<<" ";
    for (int m = 1; m < 10; m++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num[m] != num[j])
            {
                if (j == m - 1)
                    cout << num[m] << " ";
                else
                    continue;
            }
            else
                break;
        }
    }

}

