    #include <stdio.h>
    #include <stdlib.h>

    int arr[100000];

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
    	int N;
    	scanf("%d",&N);
    	int i;
    	for (i=0; i<N; i++) {
    		scanf("%d",&arr[i]);
    	}
    	quickSort(0, N-1);

    	int prevNumber = -1;
    	int prevCount = 0;
    	int wrong = 0;
    	long long total = 0;
    	for (i=0; i<N && wrong==0; i++) {
    		if (prevNumber==-1) {
    			prevNumber = arr[i];
    			prevCount = 1;
    		}
    		else if (arr[i]!=prevNumber) {
    			total += prevNumber;
    			//printf("%lld\n",total);
    			prevNumber = arr[i];
    			prevCount = 1;
    		}
    		else prevCount++;

    		if (prevCount>prevNumber) {
    			wrong = 1;
    		}
    	}

    	if (wrong) printf("-1\n");
    	else {
    		total += prevNumber;
    		printf("%lld\n",total);
    	}

    	return 0;
    }
