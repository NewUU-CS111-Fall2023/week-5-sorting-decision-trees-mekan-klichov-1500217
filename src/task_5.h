/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

void displayColors(const vector<vector<char>>& matrix) {
    map<char, string> colorMap = {{'b', "Blue"}, {'y', "Yellow"}, {'w', "White"}};

    for (const auto& row : matrix) {
        for (char symbol : row) {
            if (colorMap.find(symbol) != colorMap.end()) {
                cout << colorMap[symbol] << " ";
            }
        }
        cout << endl;
    }
}