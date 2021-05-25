#include <stdio.h>
#define MAX_SIZE 5

void binary_search(int fn_arr[], int element) {

    int f = 0, r = MAX_SIZE, mid;

    while (f <= r) {
        
        mid = (f+r)/2;
        if (fn_arr[mid] == element) {
            printf("Search element %d found at position %d \n", element, mid+1);
            break;
        } else if (fn_arr[mid] < element) {
            f = mid + 1;
        } else {
            r = mid - 1;
        }

    }

    if (f > r) {
        printf("Search element %d not found \n", element);
    }

}

int main() {
    
    int arr_search[MAX_SIZE], i, element;

    printf("Simple binary search using arrays \n");
    printf("Enter %d elements in ascending order \n", MAX_SIZE);

    for (i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &arr_search[i]);
    }

    printf("Enter element to search \n");
    scanf("%d", &element);

    binary_search(arr_search, element);
    
    return 0;

}