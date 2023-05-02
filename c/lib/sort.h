/* Sorting Algorithms */

void qsort(int array[], int start, int end) {
    /*
     * QuickSort
     * Sets pivot to Medium
     */
    int left = start, right = end;
    int pivot = array[(start + end) / 2];
    int temp;

    do {
        while (array[left] < pivot) {
            left++;
        }
        while (array[right] > pivot) {
            right--;
        }

        if (left <= right) {  // Swap
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);

    if (start < right) {
        qsort(array, start, right);
    }
    
    if (left < end) {
        qsort(array, left, end);
    }
}