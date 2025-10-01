
public class BucleWhile {

	public static void main(String[] args) {
		int cont = 0;
		while (cont<1000) {
			cont++;
			if(cont % 2 == 0) System.out.println(cont);
		}
	}
}