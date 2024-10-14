#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowedPages) {
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        // If the current book has more pages than allowed, it's invalid.
        if (arr[i] > maxAllowedPages) {
            return false;
        }
        // Add the book to the current student
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        } else {
            // If adding the book exceeds the maxAllowedPages, allocate a new student
            students++;
            pages = arr[i];
        }
    }
    // Return true if we are able to assign books within the number of students
    return students <= m;
}

int allocatesBook(vector<int>& arr, int n, int m) {
    if (m > n) {
        return -1; // More students than books, which is not possible
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0;
    int end = sum;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;  // If valid, try to minimize the maxAllowedPages
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4;  // Number of books
    int m = 2;  // Number of students
    cout << allocatesBook(arr, n, m) << endl;  // Output the minimum possible max pages per student
    return 0;
}
