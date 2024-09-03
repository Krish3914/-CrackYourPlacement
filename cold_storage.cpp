int productAtNegativeTemp(vector<int> temperature){
    int answer;
    answer = 1;
    for (int i = 0; i < temperature.size(); i++) {
        if (temperature[i] < 0) {
            product *= temperature[i];
        }
    }
    return answer;
}