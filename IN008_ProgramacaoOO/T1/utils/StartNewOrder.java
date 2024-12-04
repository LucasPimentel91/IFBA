package utils;
import models.*;
import config.*;
import java.util.*;



public class StartNewOrder {
    private static Scanner scan = new Scanner(System.in);
    private static Product refProduct;

    public static void startNewOrder(ListsObjects list, Costumer refUser){
        System.out.println("\n====ESTANTE DE PRODUTOS====\n");
        for(Product sample : list.products){
            sample.display();
            refProduct = sample;
            System.out.println("\n");
        }
        System.out.print("\nID do produto: ");
        int answer=Integer.parseInt(scan.nextLine());
        System.out.print("\nQuantidade: ");
        int quantity=Integer.parseInt(scan.nextLine());
        Order newOrder = new Order((int)Math.random()*100, "agora", refProduct, quantity);
        refUser.feedingShoppingCart(newOrder);
        System.out.println("\nPedido criado!!!");

    }
}
