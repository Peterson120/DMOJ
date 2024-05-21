import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		for (int p = 0; p < 5; p++) {
			ArrayList<String> a = new ArrayList<String>();
			String str = br.readLine();
			int pos;
			for (int i = 0; i < str.length(); i++) {
				if (str.charAt(i) == '\"' || str.charAt(i) == '\'') {
					pos = i;
					i++;
					while (i < str.length() && str.charAt(i) != str.charAt(pos))
						i++;
					a.add(str.substring(pos+1,i));
				} else if (str.charAt(i) == '/') {
					if (str.charAt(i+1) == '*') {
						i+=2;
						pos = i;
						while (!str.substring(i, i + 2).equals("*/"))
							i++;
						i++;
						a.add(str.substring(pos, i-1));
					} else if (i != str.length()-1 && str.charAt(i+1) == '/') {
						a.add(str.substring(i+2));
						i = str.length();
					}
				}
			}
			for (int i = 0; i < a.size() - 1; i++)
				System.out.print(a.get(i) + " ");
			System.out.println(a.get(a.size()-1));
		}
		br.close();
	}
}
