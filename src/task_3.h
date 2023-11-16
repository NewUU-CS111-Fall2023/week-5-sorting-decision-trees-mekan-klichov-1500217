/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>

using namespace std;

void rearrangeSoldiers(vector<string>& soldiers) {
    int n = soldiers.size();

    for (int i = 0; i < n - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}