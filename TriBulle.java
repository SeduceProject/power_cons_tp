import java.util.Random;


public class TriBulle {
	public static void main(String[] args) {
		int dataMax = 1000;
		int dataSize = Integer.parseInt(args[0]);
		int[] data = new int[dataSize];
		int i, j, tmp;
		Random rand = new Random();
		for (i = 0; i < dataSize; i++) {
			data[i] = rand.nextInt(dataMax);
		}
		System.out.println("======== donnees non triees ========");
		System.out.println("premier element: " + data[0]);
		System.out.println("dernier element: " + data[dataSize - 1]);
		if(dataSize < 20) {
			for (i = 0; i < dataSize; i++) {
				System.out.print(data[i] + " ");
			}
			System.out.println();
		}
		// Tri des donnees
		for(i = 0; i < dataSize - 1; i++) {
			for(j = 0; j < dataSize - i - 1; j++) {
			      if (data[j] > data[j+1]) {
				tmp = data[j];
				data[j] = data[j+1];
				data[j+1] = tmp;
			      }
			}
		}
		// Fin du tri
		System.out.println("======== donnees triees par ordre croissant ========");
		System.out.println("premier element: " + data[0]);
		System.out.println("dernier element: " + data[dataSize - 1]);
		if(dataSize < 20) {
			for (i = 0; i < dataSize; i++) {
				System.out.print(data[i] + " ");
			}
			System.out.println();
		}
	}

}
