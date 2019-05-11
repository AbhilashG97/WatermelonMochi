package algorithms;

import java.util.concurrent.TimeUnit;

public class InsertionSort {
	
	/**
	 * 
	 * @param array this is an input array which will get sorted
	 */
	
	public long sort(int array[]){
		final long start = System.nanoTime();
		for (int i=1; i<array.length; ++i) {
			int key = array[i];
			int j = i-1;

			while (j>=0 && array[j] > key) {
				array[j+1] = array[j];
				j = j-1;
			}
			array[j+1] = key;
		}
		final long end = System.nanoTime();
		return TimeUnit.MILLISECONDS.toSeconds(end-start);
	}
	
	/**
	 * 
	 * @param array
	 */
	
	public void displayArray(int array[]) {
		System.out.println("The sorted array is ->");
		for(Integer i : array) {
			System.out.print(i+" ");
		}
		System.out.println();
	}

}
