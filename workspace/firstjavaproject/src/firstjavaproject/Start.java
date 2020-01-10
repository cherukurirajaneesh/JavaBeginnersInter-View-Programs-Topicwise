package firstjavaproject;

import java.io.*;

class Start {
	public static void main(String args[]) {
		int i, j, k;
		int numberofLines = 5;
		for (i = 1; i <= numberofLines; i++) {
			
			/*for (j = 4; j >= 1; j--) {
				System.out.print(" ");
			}*/
			
			for (k = 1; k <= i; k++) {
				System.out.print("*");
			}
			System.out.println(" ");
		}
	}
}
