import java.io.*;
import java.util.Arrays;
public class Sorting
{
    public static void main(String[] args) throws IOException
	{
       	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int numLines = Integer.valueOf(br.readLine());
        int[] arr = new int[numLines];
        for(int i = 0; i < numLines; i++)
            arr[i] = Integer.valueOf(br.readLine());
        Arrays.sort(arr);
        for(int i : arr)
            System.out.println(i);
    }
}
