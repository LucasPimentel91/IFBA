package utils;
import models.*;
import config.*;
import java.util.*;



public class AddProduct {
    private static Scanner scan = new Scanner(System.in);
    private static Product refProduct;

    public static void addProduct(ListsObjects list, Costumer refUser){
        System.out.println("\n====ESTANTE DE PRODUTOS====\n");
        for(Product sample : list.products){
            sample.display();
            refProduct = sample;
            System.out.println("\n");
        }
        
        System.out.print("\nID do produto: ");
        int id=Integer.parseInt(scan.nextLine());
        System.out.print("\nQuantidade: ");
        int quantity=Integer.parseInt(scan.nextLine());
        OrderByProduct newOrder = new OrderByProduct(id, quantity);
        refUser.feedingShoppingCart(newOrder);
        System.out.println("\nPedido criado!!!");
        
    }
}
