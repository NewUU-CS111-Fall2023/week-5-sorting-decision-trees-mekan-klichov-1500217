/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& denominations) {
    int n = denominations.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        swap(denominations[i], denominations[minIndex]);
    }
}