import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

public class S2 {
	public static void main(String[]args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int vio = 0, x, y, g;
		
		x = Integer.valueOf(br.readLine());
		ArrayList<String> same = new ArrayList<String>();
		for (int i = 0; i < x; i++) {
			same.add(br.readLine());
		}

		y = Integer.valueOf(br.readLine());
		ArrayList<String> diff = new ArrayList<String>();
		for (int i = 0; i < y; i++) {
			diff.add(br.readLine());
		}

		g = Integer.valueOf(br.readLine());
		for (int i = 0; i < g; i++) {
			List<String> group = Arrays.asList(br.readLine().split(" "));
			
			for (int j = 0; j < same.size(); j++) {
				String[] temp = same.get(j).split(" ");
				if ((group.contains(temp[0]) && !group.contains(temp[1])) || (group.contains(temp[1]) && !group.contains(temp[0]))) {
					same.remove(j);
					j--;
					vio++;
				}
			}

			for (int j = 0; j < diff.size(); j++) {
				String[] temp = diff.get(j).split(" ");
				if (group.contains(temp[0]) && group.contains(temp[1])) {
					diff.remove(j);
					j--;
					vio++;
				}
			}
		}
		System.out.println(vio);
	}
}