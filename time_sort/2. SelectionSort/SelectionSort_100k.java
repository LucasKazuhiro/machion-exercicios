import java.util.Date;

public class SelectionSort_100k {
    public static void main(String[] args){

        //               100k    200k    300k    500k    700k    900k
        int[] limite = {100000, 200000, 150000, 125000, 175000, 225000};
        //                       400k    600k    1M
        //                       800k

        VetorDinamico v;
        long ini, fim;

        System.out.printf("SelectionSort (" + String.format("%,d", limite[0])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[0]);
            v.geraElementos();

            ini = new Date().getTime();
            v.selectionSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();

    }
}
