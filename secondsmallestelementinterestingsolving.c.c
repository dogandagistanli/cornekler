#include <stdio.h>

int main(void){
	int array[5] = {-500,1,2,3,-1000};
	int k,i,temp,c;
	//these statements find the maxvalue in the array
	for(k=0;k<5;k++){ 
		temp = array[k]; 
		for(i=0;i<5;i++){
			if(temp<array[i]){
				temp = array[i];
			}
		}

	}
	//these statements find the second smallest element in the array
	//we use a variable that named temp which is let us to find the second smallest element
	for(i=0;i<5;i++){ //1,2,3,4,5
		if(array[i]<temp){
			for(c=0;c<5;c++){
				if(array[i] > array[c]){
					temp = array[i];
				}
			}
			
		}
	}
	printf("\n%d",temp);
	
	return 0;
}