package driver;

import java.util.ArrayList;
import java.util.concurrent.TimeUnit;

import algorithms.HeapSort;
import algorithms.InsertionSort;
import algorithms.MergeSort;
import algorithms.QuickSort;
import displaydata.DisplayData;
import inputgenerator.GenerateInput;

@SuppressWarnings("serial")
public class Driver {
		
	public static ArrayList<Long> timeList;
	
	// Three different types of input sizes
	private final static int SIZE_1 = 10000;
	private final static int SIZE_2 = 100000;
	private final static int SIZE_3 = 1000000;
	
	/**
	 * @return the timeList
	 */
	public static ArrayList<Long> getTimeList() {
		return timeList;
	}


	public static void main(String[] args) {
		
		long start = 0, end = 0; 
		timeList = new ArrayList<>();
		
		System.out.println("Computing ...");
		
		// Insertion Sort
		InsertionSort insertionSort = new InsertionSort();
		timeList.add(insertionSort.sort(GenerateInput.generateArray(SIZE_1)));
		timeList.add(insertionSort.sort(GenerateInput.generateArray(SIZE_2)));
		timeList.add(insertionSort.sort(GenerateInput.generateArray(SIZE_3)));
		System.out.println("Insertion sort -> DONE !");
		
		// Heap Sort
		HeapSort heapSort = new HeapSort();
		timeList.add(heapSort.sort(GenerateInput.generateArray(SIZE_1)));
		timeList.add(heapSort.sort(GenerateInput.generateArray(SIZE_2)));
		timeList.add(heapSort.sort(GenerateInput.generateArray(SIZE_3)));
		System.out.println("Heap sort -> DONE !");
		
		// Merge Sort
		MergeSort mergeSort = new MergeSort();
		
		start = end = 0;
		start = System.nanoTime();
		mergeSort.sort(GenerateInput.generateArray(SIZE_1), 0, SIZE_1-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		
		start = end = 0;
		start = System.nanoTime();
		mergeSort.sort(GenerateInput.generateArray(SIZE_2), 0, SIZE_2-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		
		start = end = 0;
		start = System.nanoTime();
		mergeSort.sort(GenerateInput.generateArray(SIZE_3), 0, SIZE_3-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		System.out.println("Merge sort -> DONE !");
		
		// Quick Sort 
		QuickSort quickSort = new QuickSort();
		
		start = end = 0;
		start = System.nanoTime();
		quickSort.sort(GenerateInput.generateArray(SIZE_1), 0, SIZE_1-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		
		start = end = 0;
		start = System.nanoTime();
		quickSort.sort(GenerateInput.generateArray(SIZE_2), 0, SIZE_2-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		
		start = end = 0;
		start = System.nanoTime();
		quickSort.sort(GenerateInput.generateArray(SIZE_3), 0, SIZE_3-1);
		end = System.nanoTime();
		timeList.add(TimeUnit.MILLISECONDS.toSeconds(end-start));
		System.out.println("Quick sort -> DONE !");
			
		System.out.println(timeList);
		
		new DisplayData(timeList).getjFrame().setVisible(true);
	}

}
