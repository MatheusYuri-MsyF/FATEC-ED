import java.util.Date;
import java.util.Scanner;

public class TesteInsertion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("escolha o tamanho do vetor, 0 encerra: ");
        int cap = scanner.nextInt();
        VetorDinamico v;

        while(cap > 0) {
            for (int cont = 0; cont < 20; cont++){
            v = new VetorDinamico(cap);
            v.geraElementos();
            
            long ini = new Date().getTime();
            v.insertion_sort();
            long fim = new Date().getTime();
            System.out.println("Insertion demorou: " + (fim - ini) + " ms");

            }
        System.out.println("escolha o tamanho do vetor, 0 encerra: ");
        cap = scanner.nextInt();
        }
        scanner.close();
    }
}
