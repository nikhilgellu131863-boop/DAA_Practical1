#include <iostream>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Flag to check if any swapping happens
        
        // Inner loop to compare adjacent elements
        // The last i elements are already sorted after each pass
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Set flag to true since a swap occurred
            }
        }
        
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array elements
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate total number of elements

    std::cout << "Unsorted array: \n";
    printArray(arr, n);

    // Call bubble sort function
    bubbleSort(arr, n);

    std::cout << "\nSorted array in ascending order: \n";
    printArray(arr, n);

    return 0;
}
