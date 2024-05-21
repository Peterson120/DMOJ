#import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Mispelling
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine()), i = 0;
		while (i++ < n) {
			StringBuilder sb = new StringBuilder(br.readLine());
			int remove = sb.indexOf(" ");
			sb.deleteCharAt(Integer.parseInt(sb.substring(0,remove)) + remove);
			sb.delete(0, remove);
			sb.insert(0,i);
			System.out.println(sb.toString());
		}
		br.close();
		return;
	}
}
