import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int arr_i=0; arr_i < 6; arr_i++){
            for(int arr_j=0; arr_j < 6; arr_j++){
                arr[arr_i][arr_j] = in.nextInt();
            }
        }
        
        int rows = arr.length;
        int cols = arr[0].length;  // assuming rows >= 1
        int sum=0,maxSum = -9999999;
        
        for (int i=0; i< (rows - 2); i++)
            for(int j=0; j < (cols - 2); j++) {
            sum = getHourGlassSum (arr, i, j);
            if(sum > maxSum){
                maxSum = sum;                
            }
        }
        System.out.println(maxSum);
    }
    
    public static int getHourGlassSum(int arr[][], int firstRowIndex, int firstColumnIndex) {
       
       if( arr == null || firstRowIndex < 0 || firstColumnIndex < 0) {
           return 0;
       }

       return arr[firstRowIndex][firstColumnIndex] + arr[firstRowIndex][firstColumnIndex+1] + arr[firstRowIndex][firstColumnIndex+2] + 
              arr[firstRowIndex+1][firstColumnIndex+1] +
              arr[firstRowIndex+2][firstColumnIndex] + arr[firstRowIndex+2][firstColumnIndex+1] + arr[firstRowIndex+2][firstColumnIndex+2];       

   }
}
