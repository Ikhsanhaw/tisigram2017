#include <stdio.h>

int arr[50000];

void quickSort(int left, int right) {
    int lr = left;
    int rr = right;
    int mid = (lr+rr)/2;
    int pivot = arr[mid];
    while (lr<=rr) {
        while (arr[lr]<pivot) {
            lr++;
        }
    	while (arr[rr]>pivot) {
            rr--;
        }
    	if (lr<=rr) {
    		int temp;
    		temp=arr[lr];
    		arr[lr]=arr[rr];
    		arr[rr]=temp;
    		lr++;
    		rr--;
    	}
    }
    if (lr<right) quickSort(lr,right);
   	if (rr>left) quickSort(left,rr);
}

int main() {
    int x, i;
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        int n, r;
        scanf("%d %d", &n, &r);
        int j;
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        int left = 0;
        int right = n-1;
        quickSort(0, n-1);
        int ans[r];
        for (j = 0; j < r; j++) {
            scanf("%d", &ans[j]);
            if (ans[j] == 0) {
                ans[j] = arr[left];
                left++;
            } else {
                ans[j] = arr[right];
                right--;
            }
        }
        for (j = 0; j < r; j++) {
            printf("%d", ans[j]);
            if (j < r-1) {
                printf(" ");
            } else printf("\n");
        }
    }
}
