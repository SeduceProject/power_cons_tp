public class Hanoi {
	private int nbMove = 0;

	public void move(int n, int from, int to, int via) {
		if (n > 1) {
			nbMove++;
			move(n - 1, from, to, via);
			move(n - 1, via, from, to);
		}
	}

	public int getNbMove() {
		return nbMove;
	}

	public static void main(String[] args) {
		int nbDisks = Integer.parseInt(args[0]);
		Hanoi h = new Hanoi();
		h.move(nbDisks, 1, 2, 3);
		System.out.println("Nb move: " + h.getNbMove());
	}
}
