#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int b[100];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        b[k++] = arr[i++];
    }

    while (j <= right) {
        b[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = b[i];
	}


}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {

  // write your code here
