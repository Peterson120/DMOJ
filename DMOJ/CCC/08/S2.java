import java.io.*;
import java.util.*;
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); // Input
		while (true) {
			int R = Integer.parseInt(br.readLine());
			if (R == 0) return;								// If R matches end condition, terminate program
			int total = 0;
			for (int x = 1; x <= R; x++) {					// Loop along x axis from 1 -> Radius
					int y = (int) Math.sqrt(R * R - x * x);	// Distance between two points from origin (0,0), All integer coordinates within the circle
					total += y;								// Add the number of lattice points from y = 0 to edge of circle
			}
			total = (total + R) * 4 + 1;					// Multiply by 4 for each quadrant
			System.out.println(total);						// Print answer
		}
	}
}
