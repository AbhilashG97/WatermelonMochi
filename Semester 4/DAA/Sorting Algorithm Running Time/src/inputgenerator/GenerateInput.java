package inputgenerator;

public class GenerateInput {
	
	/* @param size Takes in the size of the array to be generated 
	 * @return returns an array with random numbers between 0 and 100 
	 */
	
	public static int[] generateArray(int size) {
        int array[] = new int[size];
        for(int i=0; i<size; i++){
            array[i] = (int)(Math.random()* 101);
        }
        return array;
        
	}
}
