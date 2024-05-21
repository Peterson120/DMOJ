import java.io.*;
import java.util.*;
public class Driveway {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String t[] = br.readLine().split(" ");
		Deque<String> d = new LinkedList<>();
		int M = Integer.parseInt(t[1]), T = Integer.parseInt(t[0]);
		for (int i = 0; i < T; i++) {
			t = br.readLine().split(" ");
			if (t[1].equals("in"))
				d.offerLast(t[0]);
			else {
				if (d.peekFirst().equals(t[0]))
					d.pollFirst();
				else if (M > 0 && d.peekLast().equals(t[0])) {
					d.pollLast();
					M--;
				}
			}
		}
		for (String i : d)
			System.out.println(i);
	}
}
