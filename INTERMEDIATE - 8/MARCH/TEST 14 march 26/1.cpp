#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<string>> v = {
        {"cat", "dog", "bat", "rat"},
        {"sun", "sky", "pen", "cup"},
        {"hat", "cap", "toy", "box"},
        {"car", "bus", "van", "bike"}};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {

            int k = 0;
            int l = v[i][j].size() - 1;

            while (k < l)
            {
                swap(v[i][j][k], v[i][j][l]);
                k++;
                l--;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}