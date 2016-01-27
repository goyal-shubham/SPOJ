#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string solutions[] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
    for (int a = 1; a <= t; ++a) 
    {
        int x;
        cin >> x;
        string result;
        cin >> result;
        cout << a;
        for (int i = 0; i < 8; ++i) 
        {
            int match = 0;
            size_t found = result.find(solutions[i]);
            while (found != string::npos) {
                ++match;
                found = result.find(solutions[i], found+1);
            }
            if (i < 7)
                cout << " " << match;
            else 
                cout << " " << match << endl;
        }
    }

    return 0;
}
