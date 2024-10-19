import java.util.Date;

public class BubbleSort_200k {
    public static void main(String[] args){

        //               100k    200k    300k    500k    700k    900k
        int[] limite = {100000, 200000, 150000, 125000, 175000, 225000};
        //                       400k    600k    1M
        //                       800k

        VetorDinamico v;
        long ini, fim;
    
        System.out.printf("BubbleSort (" + String.format("%,d", limite[1])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[1]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();

    }
}
