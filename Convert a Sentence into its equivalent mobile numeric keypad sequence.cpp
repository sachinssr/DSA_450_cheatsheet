#include <bits/stdc++.h>
using namespace std;
string printSequence(string input)
{
    string arr[] = { "2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
    };

    string output = "";

    int n = input.length();
    for (int i = 0; i < n; i++)
    {
        // Checking for space
        if (input[i] == ' ')
            output = output + "0";

        else
        {

            int position = input[i] - 'A';
            output = output + arr[position];
        }
    }


    return output;
}
int main()
{
    string input;
    cin>>input;
    cout << printSequence(input);
    return 0;
}