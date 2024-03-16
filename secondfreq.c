#include <stdio.h>

int main(void) {
    int array[5] = {1,1,2,2,3};
    int k, i, ct = 0, control = 0, temp = 0, max = 0,max2 = 0,secondfre;

    for (k = 0; k < 5; k++) {
        for (i = 0; i < 5; i++) {
            if (array[k] == array[i] && i < k) {
                break;
            } else if (array[k] == array[i]) {
                ct++;
            }
        }

        for (int d = 0; d < k; d++) {
            if (array[k] == array[d]) {
                control = 1;
                break;
            }
        }

        if (!control) {
            printf("%d occurs %d times ", array[k], ct);
        }
        if (ct > max) {
            max = ct;
        }
        if(ct<max && ct>max2){
        	max2 = ct;
        	secondfre=k;
		}

        temp = ct;
        control = 0;
        ct = 0;
    }

    printf("\n%d", max);
	printf("\n%d", array[secondfre]);
    return 0;
}
