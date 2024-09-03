    #include <bits/stdc++.h>
    using namespace std;
    int minProject(vector<int> errorScore, int compP, int othQ)
    {
        int answer;
        answer = 0;

        while (true)
        {
            sort(errorScore.rbegin(), errorScore.rend());

            if (errorScore[0] <= 0)
            {
                break;
            }

            errorScore[0] -= compP;

            for (int i = 1; i < errorScore.size(); i++)
            {
                if (errorScore[i] > 0)
                {
                    errorScore[i] -= othQ;
                }
            }

            answer++;
        }

        return answer;
    }

    int main()
    {
        // Input for errorScore
        int errorScore_size;
        cin >> errorScore_size;

        vector<int> errorScore;
        for (int idx = 0; idx < errorScore_size; idx++)
        {
            int temp;
            cin >> temp;
            errorScore.push_back(temp);
        }

        // Input for compP
        int compP;
        cin >> compP;

        // Input for compQ
        int compQ;
        cin >> compQ;

        int result = minProject(errorScore, compP, compQ);
        cout << result << endl;

        return 0;
    }