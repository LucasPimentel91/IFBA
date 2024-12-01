package menu;
import java.util.*;

public class Sub_Menus {
    
    private static Scanner scan = new Scanner(System.in);

    public static int menu(){
        System.out.println("1. Produtc\n2. Costumer user\n3. Administrator\n3. Order\n4. Shopping Cart\nQual opcao:");
        int answer = scan.nextInt();
        return answer;
    }

    public static void menuProduct(){
        System.out.println("1. Register product\n2. Update product\n3. Delete product\nQual opcao:");
        int answer = scan.nextInt();
    }
    public static void menuCostumer(){
        System.out.println("1. Register costumer\n2. Update costumer\n3. Delete costumer\nQual opcao:");
        int answer = scan.nextInt();
    }
    public static void menuAdministrator(){
        System.out.println("1. Register administrator\n2. Update administrator\n3. Delete administrator\nQual opcao:");
        int answer = scan.nextInt();
    }
    public static void menuOrder(){
        System.out.println("1. Register order\n2. Update order\n3. Delete order\nQual opcao:");
        int answer = scan.nextInt();
    }
    public static void menuShoppingCart(){
        System.out.println("1. Register shopping cart\n2. Update shopping cart\n3. Delete shopping cart\nQual opcao:");
        int answer = scan.nextInt();
    }

}
