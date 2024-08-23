import java.util.Date;
import java.util.Scanner;

public class TesteSelection {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("escolha o tamanho do vetor, 0 encerra: ");
        int cap = scanner.nextInt();
        VetorDinamico v;
        long ini, fim;

        while(cap > 0) {
            for (int cont = 0; cont < 20; cont++){
            v = new VetorDinamico(cap);
            v.geraElementos();
            
            ini = new Date().getTime();
            v.geraElementos();
            v.selection_sort();
            fim = new Date().getTime();
            
            System.out.println("Selection demorou: " + (fim - ini) + " ms");
            }
        System.out.println("escolha o tamanho do vetor, 0 encerra: ");
        cap = scanner.nextInt();
        }
        scanner.close();
    }
}
