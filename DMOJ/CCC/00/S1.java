import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class S1
{
	private static int play1 = 0, play2 = 0, play3 = 0, quarters;
	private final static int MAX1 = 35, MAX2 = 100, MAX3 = 10;
	private final static int NUM1 = 30, NUM2 = 60, NUM3 = 9;
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		quarters = Integer.parseInt(br.readLine());
		play1 += Integer.parseInt(br.readLine());
		play2 += Integer.parseInt(br.readLine());
		play3 += Integer.parseInt(br.readLine());
		int i = 0;
		while (quarters > 0)
		{
			check(i);
			quarters--;
			i++;
		}

		System.out.println("Martha plays " + i + " times before going broke.");
	}

	private static void check(int i)
	{
		switch (i % 3)
		{
			case 0:
				play1++;
				if (play1 >= MAX1)
				{
					play1 = 0;
					quarters += NUM1;
				}
				break;
			case 1:
				play2++;
				if (play2 >= MAX2)
				{
					play2 = 0;
					quarters += NUM2;
				}
				break;
			case 2:
				play3++;
				if (play3 >= MAX3)
				{
					play3 = 0;
					quarters += NUM3;
				}
				break;
		}
		return;
	}
}
