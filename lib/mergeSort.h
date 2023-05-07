#pragma once

void _merge(int arr[], int l, int m, int r) {
    int i, j, k, n1 = m - l + 1, n2 = r - m, L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    for (i = 0, j = 0, k = l; i < n1 && j < n2; k++)
        arr[k] = L[i] <= R[j] ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void _merge(char arr[], int l, int m, int r) {
    int i, j, k, n1 = m - l + 1, n2 = r - m, L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    for (i = 0, j = 0, k = l; i < n1 && j < n2; k++)
        arr[k] = L[i] <= R[j] ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void sort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    sort(arr, l, m);
    sort(arr, m + 1, r);
    _merge(arr, l, m, r);
}

void sort(char arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    sort(arr, l, m);
    sort(arr, m + 1, r);
    _merge(arr, l, m, r);
}