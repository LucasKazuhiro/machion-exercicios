import java.util.Scanner;
import java.util.Date;
 
public class TesteOrdenacao {
   
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.print("Escolha o tamanho do vetor, 0 encerra: ");
            int cap = scanner.nextInt();

            VetorDinamico v;
            long ini, fim;

            while (cap>0){
                v = new VetorDinamico(cap);

            //  Buble Sort
            /* 
                v.geraElementos();

                ini = new Date().getTime();
                v.bubbleSort();
                fim = new Date().getTime();

                System.out.println("Bubble demorou" + (fim-ini) + " ms");
                System.out.println("vetor ordenado: " + v);
                
                // v.resetVetor();
            */
            

            //  Quick Sort (vetor aleatorio)
                v.geraElementos();

                //System.out.println("2o vetor: " +v);

                ini = new Date().getTime();
                v.quick(0, cap-1);
                fim = new Date().getTime();

                System.out.println("\n\n");
                System.out.println("Primeiro QuickSort demorou "+  (fim-ini) + "ms");
                System.out.println("\n\n\n\n");
                // System.out.println("Vetor ordenado pelo quick" + v);


            // Quick Sort (vetor ordenado)
                //System.out.println("2o vetor: " +v);

                ini = new Date().getTime();
                v.quick(0, cap-1);
                fim = new Date().getTime();

                System.out.println("\n\n");
                System.out.println("2o quick demorou "+  (fim-ini) + "ms");
                System.out.println("\n\n\n\n");



            // Pedir próximo tamanho do vetor
                System.out.print("Escolha o tamanho do vetor, 0 encerra: ");
                cap = scanner.nextInt();
            }

            scanner.close();
    }
}
 