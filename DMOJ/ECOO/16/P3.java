import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;

class Main {
	public static int n;
	public static int[] where = new int[1001];
	public static ArrayList <Integer> past;
	public static void main(String[] args) throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		for(int o = 0; o < 10; o ++) {
			n = Integer.parseInt(in.readLine());
			String[] t = in.readLine().split(" ");
			past = new ArrayList <Integer>();
			for (int i = 0; i < n; i ++)
				where[Integer.parseInt(t[i])] = i;
			int ans = 0;
			int lasti = where[n];
			for (int i = n-1; i > 0; i--) {
				int index = where[i];
				for (int i2 = 0; i2 < past.size(); i2++)
					if (past.get(i2) > index)
						index++;
				if (lasti < index) {
					past.add(index);
					ans += index;
					lasti = 0;
				} else
					lasti = index;
			}
			System.out.println(ans);
		}
	}
}
