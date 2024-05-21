import sys
import math
def main():
    while (True):
        R = int(sys.stdin.readline()) 		    # Fast Input
        if (R == 0):                            # If R matches end condition, terminate program
            return
        total = 0
        for x in range (1, R+1):     		    # Loop along x axis from 1 -> Radius
            y = int(math.sqrt(R * R - x * x))	# Distance between two points from origin (0,0), All integer coordinates within the circle
            total += y;						    # Add the number of lattice points from y = 0 to edge of circle
        total = ((total + R) * 4) + 1;		    # Multiply by 4 for each quadrant
        print(total);					        # Print answer

main()
