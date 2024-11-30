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
            if(check == 1)
                scan.close();
                return 1;
        }
        scan.close();
        return 0;
    }

    //Desenvolva um menu geral para testes
    public static void menu(){

    }

    public static void main(String[] args){
        Administrator admim = new Administrator(0, "admin", "admin@marketplace.com", "12345");
        ADMs.add(admim);

        /*FileOutputStream fileOUT = new FileOutputStream("C://Users//plact//OneDrive//Documentos//scripts//IFBA//IN008_ProgramacaoOO//T1//config//database.bytej");
        ObjectOutputStream objectOUT = new ObjectOutputStream(fileOUT);*/

        login();
        
    
    }
    

}