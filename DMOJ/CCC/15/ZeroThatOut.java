import java.io.*;
import java.util.*;
public class ZeroThatOut {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int K = Integer.parseInt(br.readLine()), total = 0;
		Stack<Integer> s = new Stack<>();
		for (int i = 0; i < K; i++) {
			int temp = Integer.parseInt(br.readLine());
			if (temp == 0) {
				total -= s.peek();
				s.pop();
			} else {
				total += temp;
				s.push(temp);
			}
		}
		System.out.println(total);
	}
}

