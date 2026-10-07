int search(int* arr, int n, int target) {
    int low;
    int high;
    int rem = -1;
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > target) {
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            rem = mid;
            break;
        }
    }
    return rem;
}