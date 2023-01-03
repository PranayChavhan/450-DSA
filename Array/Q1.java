import java.util.Scanner;

public class Q1 {
    
    public static void main (String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of elements you want to store: ");

        n=sc.nextInt();

        int[] arr = new int[10];

        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();
        }
		 sc.close();

		printArray(arr, 6);
		rvereseArray(arr, 0, 5);
		System.out.println("Reversed array is ");
		printArray(arr, 6);
	}
	static void rvereseArray(int arr[], int start, int end)
	{
		int temp;
		if (start >= end)
			return;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		rvereseArray(arr, start+1, end-1);
	}

	static void printArray(int arr[], int size)
	{
		for (int i=0; i < size; i++)
			System.out.print(arr[i] + " ");
		System.out.println("");
	}

	
}