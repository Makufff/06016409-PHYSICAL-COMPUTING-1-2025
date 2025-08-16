#include <stdio.h>
#include <ctype.h>
#include <string.h>

void change(char x[]){
    for (int i = 0; x[i] != '\0'; i++){
        if (i == 0 || x[i - 1] == ' ') x[i] = toupper((char)x[i]);
        else x[i] = tolower((char)x[i]);
    }
}

int checkXtoY(char x[], char y[]){
    int i = 0;
    while (x[i] != '\0' && y[i] != '\0'){
        if (x[i] > y[i]) return 1;
        if (x[i] < y[i]) return 0;
        i++;
    }
    if (x[i] != '\0') return 1;
    return 0;
}

void merge(char arr[][255], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    char L[n1][255], R[n2][255];
    
    for (i = 0; i < n1; i++) strcpy(L[i], arr[left + i]);
    for (j = 0; j < n2; j++) strcpy(R[j], arr[mid + 1 + j]);
    
    i = 0; j = 0; k = left;
    
    while (i < n1 && j < n2){
        if (!checkXtoY(L[i], R[j])) strcpy(arr[k++], L[i++]);
        else strcpy(arr[k++], R[j++]);
    }
    while (i < n1) strcpy(arr[k++], L[i++]);
    while (j < n2) strcpy(arr[k++], R[j++]);
}

void mergeSort(char arr[][255], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char NAME[n][255];
    for (int i = 0; i < n; i++) scanf(" %[^\n]", NAME[i]), change(NAME[i]);

    mergeSort(NAME, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%s\n", NAME[i]);

    return 0;
}
