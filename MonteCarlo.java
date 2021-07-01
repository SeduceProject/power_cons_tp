public class MonteCarlo {
	public static void main(String[] args) {
		int nbIteration = Integer.parseInt(args[0]);
		System.out.println("Valeur de Pi    : 3,141592653589793238462643383279");
		System.out.println("Valeur calculee : " + getPi(nbIteration) + " apres " + nbIteration + " iterations");
	}

	public static double getPi(int itNb) {
		int inCircle= 0;
		for(int i= 0;i < itNb;i++) {
			double randX= Math.random();
			double randY= Math.random();
			if(randX * randX + randY * randY < 1) {
				inCircle++;
			}
		}
		return 4.0 * inCircle / itNb;
	}
}
