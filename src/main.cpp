/*
 * Author: Mekan Klichov
 * Date: 16.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    std::cout << "Task 1" << std::endl;

    vector<string> books = {
            "Catcher in the Rye",
            "Pride and Prejudice",
            "To Kill a Mockingbird",
            "The Great Gatsby",
            "Moby Dick"
    };

    bubbleSort(books);

    for (const string& book : books) {
        cout << book << endl;
    }

    std::cout << "Task 2" << std::endl;

    vector<int> nums = {8, 3, 12, 6, 1};
    selectionSort(nums);
    for (const int& num : nums){
        cout << num << endl;
    }

    std::cout << "Task 3" << std::endl;

    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    rearrangeSoldiers(soldiers);

    for (const string& soldier : soldiers) {
        cout << soldier << endl;
    }

    std::cout << "Task 4" << std::endl;

    vector<int> arr = {5, 2, 8, 1, 4, 6};

    int result = countElements(arr);

    cout << result << endl;

    std::cout << "Task 5" << std::endl;

    vector<vector<char>> matrix = {
            {'b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'},
            {'b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'},
            {'y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'},
            {'y', 'w', 'y', 'w', 'y', 'w', 'w', 'b', 'b'},
            {'w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'},
            {'b', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w'}};

    displayColors(matrix);

    return 0;
}
