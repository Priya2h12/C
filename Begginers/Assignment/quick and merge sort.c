import java.util.*;

import java.lang.*;

import java.io.*;

import java.util.Scanner;



{

public static void main (String[] args) throws java.lang.Exception

   {

  Scanner scan = new Scanner( System.in );
   System.out.println("Merge Sort Test\n");

   int n, i;

   System.out.println("Enter number of integer elements");

  n = scan.nextInt();

  int arr[] = new int[ n ];

  System.out.println("\nEnter "+ n +" integer elements");

  for (i = 0; i < n; i++)

   arr[i] = scan.nextInt();

   sort(arr, 0, n);

  System.out.println("\nElements after sorting ");
    for (i = 0; i < n; i++)

     System.out.print(arr[i]+" ");
     System.out.println();
      

	}
 

  public static void sort(int[] a, int low, int high) 

   {

    int N = high - low;
    if (N <= 1)
 
     return;
 
   int mid = low + N/2;
 
 
 
   sort(a, low, mid);
 
   sort(a, mid, high);
 
  int[] temp = new int[N];

   int i = low, j = mid;

    for (int k = 0; k < N; k++) 

   {
 
    if (i == mid)
       temp[k] = a[j++];
 
   else if (j == high)
 
   temp[k] = a[i++];

   else if (a[j]<a[i])
 
    temp[k] = a[j++];

    else 

      temp[k] = a[i++];

     }    

     for (int k = 0; k < N; k++)
 
     a[low + k] = temp[k];

    }
 

}