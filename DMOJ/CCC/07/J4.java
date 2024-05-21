import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class J4 {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str1, str2;
		str1 = br.readLine().replaceAll("\\s+", "");
		str2 = br.readLine().replaceAll("\\s+", "");
		if (str1.length() != str2.length()) {
			System.out.println("Is not an anagram.");
			System.exit(0);
		}
		boolean[] used = new boolean[str1.length()];
		for (int i = 0; i < str1.length(); i++) {
			boolean correct = false;
			int index = str2.indexOf(str1.charAt(i));
			do {
				if (index == -1) {
					System.out.println("Is not an anagram.");
					System.exit(0);
				} else if (used[index]) {
					index = str2.indexOf(str1.charAt(i), index + 1);
				} else {
					used[index] = true;
					correct = true;
				}
			} while(!correct);
		}
		System.out.println("Is an anagram.");
	}
}
