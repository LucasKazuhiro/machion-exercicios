import java.util.Date;

public class TesteOrdenacao{
    public static void main(String[] args){

        VetorDinamico v;
        long ini, fim;


        
        v = new VetorDinamico(150000);
        v.geraElementos();
    
        // BubbleSort
        ini = new Date().getTime();
        v.bubbleSort();
        fim = new Date().getTime();
        //System.out.println("Vetor: " + v);
        System.out.println("\nBubbleSort demorou " + (fim-ini) + "ms");




        v.resetarVetor();
        v = new VetorDinamico(150000);
        v.geraElementos();

        // SelectionSort
        ini = new Date().getTime();
        v.selectionSort();;
        fim = new Date().getTime();
        //System.out.println("Vetor: " + v);
        System.out.println("\nSelectionSort demorou " + (fim-ini) + "ms");
    

        

        v.resetarVetor();
        v = new VetorDinamico(150000);
        v.geraElementos();

        // InsertionSort
        ini = new Date().getTime();
        v.insertionSort();;
        fim = new Date().getTime();
        //System.out.println("Vetor: " + v);
        System.out.println("\nInsertionSort demorou " + (fim-ini) + "ms");
    }
}