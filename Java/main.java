package Java;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        
        int pontos = 0;
        Scanner tcl = new Scanner(System.in);


        System.out.print("Qual seu nome:");
        String nome = tcl.next();
        System.out.print("\nQual a sua idade: ");
        int idade = tcl.nextInt();


        System.out.printf("Seu nome é: " + nome + " e sua idade é: " + idade);

        while(true){
            

            System.out.println("Escolha um número: ");
            int escolha = tcl.nextInt();


            if (escolha == 1) {
                System.out.println("\nVocê está no inicio do jackpot!\n");
                

                if (escolha >= 20) {
                    System.out.println("Você morreu!");
                    System.out.println("Você perdeu 15 pontos\n");
                    System.out.println("||  -15 pontos  ||");
                    pontos -= 15;
                    System.out.println("_________________________________");
                }
                else{
                    System.out.println("você passou! \nVocê ganhou 30 pontos\n");
                    System.out.println("||  + 30 pontos  ||");
                    pontos += 30;
                }
            }
            if (escolha == 2) {

                System.out.println("você entrou no menu de compra.");
                System.out.println("oque você quer comprar?");
                System.out.println("[1] ");
                
            }
            if (escolha == 0) {
                System.out.println("Você saiu do menu.");
                
            }
                


        }
    }
}
