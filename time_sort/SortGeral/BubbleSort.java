import java.util.Date;

public class BubbleSort {
    public static void main(String[] args){

        int[] teste = {20, 30, 40};
        //               100k    200k    300k    500k    700k    900k
        int[] limite = {100000, 200000, 150000, 125000, 175000, 225000};
        //                       400k    600k    1M
        //                       800k


        VetorDinamico v;
        long ini, fim;


    /*
        System.out.println("BubbleSort (20)");
        for(int i=0; i<1; i++){
            v = new VetorDinamico(teste[0]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d ", fim-ini);
            System.out.println();

            System.out.printf("Elementos: " + v);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();




        System.out.println("BubbleSort (30)");
        for(int i=0; i<1; i++){
            v = new VetorDinamico(teste[1]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d ", fim-ini);
            System.out.println();

            System.out.printf("Elementos: " + v);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();




        System.out.println("BubbleSort (40)");
        for(int i=0; i<1; i++){
            v = new VetorDinamico(teste[2]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d ", fim-ini);
            System.out.println();

            System.out.printf("Elementos: " + v);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();
    */











 
        System.out.printf("BubbleSort (" + String.format("%,d", limite[0])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[0]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();
    


    
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
    


    
        System.out.printf("BubbleSort (" + String.format("%,d", limite[2])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[2]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();
    


    
        System.out.printf("BubbleSort (" + String.format("%,d", limite[3])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[3]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();
    


    
        System.out.printf("BubbleSort (" + String.format("%,d", limite[4])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[4]);
            v.geraElementos();

            ini = new Date().getTime();
            v.bubbleSort();
            fim = new Date().getTime();

            System.out.printf("%d, ", fim-ini);

            v.resetarVetor();
        }

        System.out.println();
        System.out.println();
    


    
        System.out.printf("BubbleSort (" + String.format("%,d", limite[5])+")");
        System.out.println();
        for(int i=0; i<10; i++){
            v = new VetorDinamico(limite[5]);
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
