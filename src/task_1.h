/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& books) {
    int n = books.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}