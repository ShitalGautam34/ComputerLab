#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, arr_size, sort_choice, temp, counter;
	
	//declaring the array
	printf("Enter the size of the array to sort: ");
	scanf("%d", &arr_size);
	int num[arr_size];
	
	// inputting the values in array
	for(i=0;i<arr_size;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d", &num[i]);
	}

	// how to sort the array?
	printf("\nHow would you like to sort the array?\n");
	printf("Enter 1 -> ascending, 2 -> descending, 3 -> both:  ");
	scanf("%d", &sort_choice);
	counter = sort_choice;
	
	// sorting the array
	while((counter) != 0){
		for(i=0;i<(arr_size-1);i++){
			temp = 0;
			 for(j=0;j<(arr_size-1);j++){
			 	if(counter == 1){     // for ascending order sort
			 		if(num[j] > num[j+1]){
			 			temp = num[j];
			 			num[j] = num[j+1];
			 			num[j+1] = temp;
				 	}
				 }
				 else if(counter == 2){  // for descending order sort
				 	if(num[j] < num[j+1]){
			 			temp = num[j];
			 			num[j] = num[j+1];
			 			num[j+1] = temp;
					}
				 }
			 	
			 }
		}
	
		// displaying the sorted array
		if(counter != 3){
			if(counter == 1) // counter=1 is for ascending order
				printf("\nArray sorted in ascending order is: [");
			else if(counter == 2)  // counter=2 is for descending order
				printf("\nArray sorted in descending order is: [");
				
			for(i=0;i<arr_size;i++){
				printf("%d,",num[i]);
			}
			printf("\b]\n");   // \b is used to remove the last unnecessary comma
		}
		
		if(sort_choice != 3){    
			break;
		}
		/* main logic: if choice is for both order,run above code twice reducing the value of 
		counter so that it is sorted in both ascending and descending, else break if only one 
		order is chosen */
		counter--;
	}
	
	getch();
}
