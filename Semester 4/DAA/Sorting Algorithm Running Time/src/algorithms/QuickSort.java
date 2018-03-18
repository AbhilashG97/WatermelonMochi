package algorithms;

public class QuickSort {
	
	/**
	 * 
	 * @param arr
	 * @param low
	 * @param high
	 * @return
	 */
    private int partition(int arr[], int low, int high) { 
        int pivot = arr[high]; 
        int i = (low-1); 
        for (int j=low; j<high; j++) {

            if (arr[j] <= pivot) {
                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }
    
    // Recursive sorting
    
    /**
     * 
     * @param arr
     * @param low
     * @param high
     */
    public void sort(int arr[], int low, int high) {
        if (low < high) {

            int pi = partition(arr, low, high);

            sort(arr, low, pi-1);
            sort(arr, pi+1, high);
        }
    }
    
    /**
     * 
     * @param arr
     */    
    public void displaySortedArray(int arr[]) {
        System.out.println("\nSorted array is ->");
        for(Integer k : arr){
            System.out.print(k+" ");
        }
        System.out.println();
    }

}
