package menu;
import java.util.*;

public class Sub_Menus {
    
    private Scanner scan = new Scanner(System.in);

    public int menuAdmin(){
        System.out.println("1. Create new produtc\n2. Create new user\n3. Report - more expensive order\n4. Report - product with lowest inventory\n5. Exit\nQual opcao:");
        int answer = scan.nextInt();
        return answer;
    }
    public int menuCostumer(){
        System.out.println("1. Start new order\n2. Exit\nQual opcao:");
        int answer = scan.nextInt();
        return answer;
    }


}
