/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>

using namespace std;

int countElements(const vector<int>& arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            count++;
        }
    }

    return count;
}