import java.util.*;
import java.io.*;
public class J4 {
	static class Comp implements Comparator<String> {
		public int compare(String a, String b) {
			if (map.get(a) > map.get(b))
				return -1;
			return 1;
		}
	}
	static HashMap<String, Integer> map;
	static List<String> key;
	public static void main (String[] args) throws IOException {
		map = new HashMap<String, Integer>();
		key = new ArrayList<String>();
		int N, C, M, num, total = 0;
		String arr[], str;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		if (N < C) {
			System.out.println("Ace is dunzos.");
			return;
		}

		arr = br.readLine().toLowerCase().split(" ");
		num = Integer.parseInt(arr[arr.length - 1]);
		arr[arr.length - 1] = "";
		str = String.join("", arr);
		map.put(str, num);
		key.add(str);

		for (int i = 1; i < N; i++) {
			arr = br.readLine().toLowerCase().split(" ");
			num = Integer.parseInt(arr[arr.length - 1]);
			arr[arr.length - 1] = "";
			str = String.join("", arr);
			map.put(str, num);
			int loc = -Collections.binarySearch(key, str, Collections.reverseOrder()) - 1;
			key.add(loc, str);
		}
		num = 0;
		for (int i = 0; i < M; i++)	{
			str = br.readLine().toLowerCase();
			if (!map.containsKey(str)) {
				System.out.println("Ace is dunzos.");
				return;
			}
			num++;
			total += map.get(str);
			key.remove(str);
		}
		Collections.sort(key, new Comp());
		if (num < C || map.get(key.get(0)) > total/num) {
			for (int i = 0; (map.get(key.get(0)) >= total * 1.0 / num || i < C - num); i++) {
				total += map.get(key.get(0));
				num++;
				key.remove(0);
			}
		}
		if (total * 1.0 /num < 50)
			System.out.println("Ace is dunzos.");
		else
			System.out.format("%.2f\n", total * 1.0 /num);
	}
}
