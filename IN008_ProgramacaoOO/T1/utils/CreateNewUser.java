package utils;
import models.*;
import config.*;
import java.util.*;

public class CreateNewUser {

    private static Scanner scan = new Scanner(System.in);
    public static void createNewUser(ListsObjects list){
        System.out.print("1. Costumer\n 2. Administrator\nR: ");
        int answer = Integer.parseInt(scan.nextLine());
        int id = (int) Math.random() * 100;
        System.out.print("User name: ");
        String name = scan.nextLine();
        System.out.print("Email: ");
        String email = scan.nextLine();
        System.out.print("Password: ");
        String password = scan.nextLine();
        System.out.print("Address: ");
        String address = scan.nextLine();
        if(answer == 1){
            Costumer newCostumer = new Costumer(id, name, email, password, address);
            list.users.add(newCostumer);
        }else if(answer == 2){
            Administrator newAdministrator = new Administrator(id, name, email, password);
            list.users.add(newAdministrator);
        }
    }
}