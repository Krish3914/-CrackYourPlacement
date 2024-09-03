#include<bits/stdc++.h>
using namespace std;
vector<int> funcArrange(vector<int> inputArr){
    vector<int> answer;
    for(int i=0; i<inputArr.size(); i++){
        if(inputArr[i]%2==0){
            answer.push_back(inputArr[i]);
        }
    }
    for (int i = 0; i < inputArr.size(); i++)
    {
        if (inputArr[i] % 2 == 1)
        {
            answer.push_back(inputArr[i]);
        }
    }
    return answer;
}
int main(){
    vector<int> inputArr = {1, 2, 3, 4, 5};
    vector<int> result = funcArrange(inputArr);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}