package main;
import models.Administrator;
import models.Costumer;
import models.User;
import models.Order;
import models.Product;
import models.ShoppingCart;
import java.util.*;
import java.io.*;

public class Main{
    //Listas para as instâncias de objetos
    private static ArrayList<Product> products = new ArrayList<Product>();
    private static ArrayList<Order> orders = new ArrayList<Order>();
    private static ArrayList<Costumer> costumers = new ArrayList<Costumer>();
    private static ArrayList<Administrator> ADMs = new ArrayList<Administrator>();
    private static Scanner scan = new Scanner(System.in);

    /*scan.close();

    FileOutputStream fileCreation = new FileOutputStream("config/database.bytej");

    ObjectOutputStream objectOUT = new ObjectOutputStream(new FileOutputStream("config/database.bytej"));
    objectOUT.writeObject(-- objeto instanciado--);
    objectOUT.close();
    

    ObjectInputStream objectIN = new ObjectInputStream(new FileInputStream("config/database.bytej"));
    [Classe] [nome_objeto] = (Classe) objectIN.readObject();
    object.IN.close();
     */
    
    public static int login(){
        System.out.print("email: ");
        String email = scan.nextLine();
        System.out.print("senha: ");
        String password = scan.nextLine();
        for(Administrator adm : ADMs){
            int check = adm.verifyAccount(email, password);
            System.out.println("\n\n" + check + "\n");
            if(check == 1){
                System.out.println("\nAcesso permitido!\n");
                return 1;
            }
        }
        return 0;
    }

    //Desenvolva um menu geral para testes
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


    public static void main(String[] args){
        Administrator admim = new Administrator(0, "admin", "admin@marketplace.com", "12345");
        ADMs.add(admim);

        /*FileOutputStream fileOUT = new FileOutputStream("C://Users//plact//OneDrive//Documentos//scripts//IFBA//IN008_ProgramacaoOO//T1//config//database.bytej");
        ObjectOutputStream objectOUT = new ObjectOutputStream(fileOUT);*/
        while(true){
            int num;
            num = login();
            System.out.println("\n\n"+ num +"\n\n");
            if(num == 1){
                switch (menu()) {
                    case 1:
                        menuProduct();
                        break;
                    case 2:
                        menuCostumer();
                        break;
                    case 3:
                        menuAdministrator();
                        break;
                    case 4:
                        menuOrder();
                        break;
                    case 5:
                        menuShoppingCart();
                        break;
                    default:
                        break;
                }
            }
            System.out.println("Email ou senha incorretos!");
        }
    }
    

}