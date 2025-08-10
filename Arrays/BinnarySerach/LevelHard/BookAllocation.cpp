#include <bits/stdc++.h>
using namespace std;

// Function to check if we can allocate books to the given number of students
// without exceeding the given maximum pages limit
bool canAllocate(vector<int> &pagesInEachBook, int numberOfBooks, int numberOfStudents, int maxPagesAllowed) {
    int studentCount = 1; // Start with the first student
    int currentPagesSum = 0; // Track pages allocated to the current student

    for (int i = 0; i < numberOfBooks; i++) {
        // If any single book has more pages than the allowed maxPages, allocation is not possible
        if (pagesInEachBook[i] > maxPagesAllowed) {
            return false;
        }

        // If adding this book to the current student exceeds the max limit
        if (currentPagesSum + pagesInEachBook[i] > maxPagesAllowed) {
            // Allocate this book to the next student
            studentCount++;
            currentPagesSum = pagesInEachBook[i]; // Reset the sum for the new student

            // If students required exceed the allowed number, allocation is not possible
            if (studentCount > numberOfStudents) {
                return false;
            }
        }
        else {
            // Add the book to the current student's allocation
            currentPagesSum += pagesInEachBook[i];
        }
    }

    return true; // Allocation possible within given limit
}

// Main function to find the minimum possible maximum pages for allocation
int findMinimumMaxPages(vector<int> &pagesInEachBook, int numberOfBooks, int numberOfStudents) {
    int start = 0; // Minimum possible max pages (could start from max book pages)
    int end = 0;   // Maximum possible max pages (sum of all pages)

    // Calculate start and end
    for (int i = 0; i < numberOfBooks; i++) {
        end += pagesInEachBook[i];
        start = max(start, pagesInEachBook[i]); // Start should be at least the max single book
    }

    int answer = -1;

    // Binary search to find the minimum max pages
    while (start <= end) {
        int mid = start + (end - start) / 2; // mid = possible max pages allowed

        // Check if we can allocate with this mid value
        if (canAllocate(pagesInEachBook, numberOfBooks, numberOfStudents, mid)) {
            answer = mid;   // Possible answer
            end = mid - 1;  // Try to find a smaller value
        }
        else {
            start = mid + 1; // Increase limit if allocation fails
        }
    }

    return answer;
}

int main() {
    vector<int> pagesInEachBook = {10, 20, 30, 40}; // Pages in each book
    int numberOfBooks = 4;
    int numberOfStudents = 2;

    int result = findMinimumMaxPages(pagesInEachBook, numberOfBooks, numberOfStudents);

    cout << "Minimum possible maximum pages: " << result << endl;

    return 0;
}
