void main(void) {
	int arr[] = {54, 6, 8, 30, 43, 22};
	int n = 6;
	 // sorting function 
	 int i, j;
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1]) {
								int temp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = temp;
					 }
}
