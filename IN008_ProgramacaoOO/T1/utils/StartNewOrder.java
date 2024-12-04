package utils;
import models.*;
import config.*;
import java.util.*;



public class StartNewOrder {
    private static Scanner scan = new Scanner(System.in);

    public void startNewOrder(ListsObjects list, User refUser){
        System.out.println("\n====ESTANTE DE PRODUTOS====\n");
        for(Product sample : list.products){
            sample.display();
            System.out.println("\n");
        }
        System.out.print("\nID do produto: ");
        int answer=Integer.parseInt(scan.nextLine());
        System.out.print("\nQuantidade: ");
        int quantity=Integer.parseInt(scan.nextLine());
        Order newOrder = new Order((int) Math.random() * 100, "agora", qunatity)

    }
}
