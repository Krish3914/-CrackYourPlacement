#include <bits/stdc++.h>
using namespace std;

int isSameReflection(string word1, string word2)
{
    int answer;
    if (word1.length() != word2.length())
    {
        return -1;
    }

    string concatenated = word2 + word2;
    if (concatenated.find(word1) != string::npos)
    {
        return 1;
    }

    return -1;
    return answer;
}
int main(){
    string word1 = "abca", word2 = "dcba";
    cout << isSameReflection(word1, word2) << endl; // Output: 1
    return 0;
}