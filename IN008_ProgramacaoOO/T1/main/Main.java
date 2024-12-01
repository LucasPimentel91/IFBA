package main;
import models.*;
import utils.*;
import config.*;
import java.util.*;
import java.io.*;

public class Main{
    //Listas para as instâncias de objetos
    private static ArrayList<Product> products = new ArrayList<Product>();
    private static LinkedList<Order> orders = new LinkedList<Order>();
    private static ArrayList<Costumer> costumers = new ArrayList<Costumer>();
    private static ArrayList<Administrator> ADMs = new ArrayList<Administrator>();

    /*scan.close();

    FileOutputStream fileCreation = new FileOutputStream("config/database.bytej");

    ObjectOutputStream objectOUT = new ObjectOutputStream(new FileOutputStream("config/database.bytej"));
    objectOUT.writeObject(-- objeto instanciado--);
    objectOUT.close();
    

    ObjectInputStream objectIN = new ObjectInputStream(new FileInputStream("config/database.bytej"));
    [Classe] [nome_objeto] = (Classe) objectIN.readObject();
    object.IN.close();
     */
    
    public static void main(String[] args){
        Login refLogin = new Login();
        Sub_Menus refMenu = new Sub_Menus();
        Administrator admim = new Administrator(0, "admin", "admin@marketplace.com", "12345");
        ADMs.add(admim);

        /*FileOutputStream fileOUT = new FileOutputStream("C://Users//plact//OneDrive//Documentos//scripts//IFBA//IN008_ProgramacaoOO//T1//config//database.bytej");
        ObjectOutputStream objectOUT = new ObjectOutputStream(fileOUT);*/
        while(true){
            int num;
            num = refLogin.login();
            System.out.println("\n\n"+ num +"\n\n");
            if(num == 1){
                switch (refMenu.menu()) {
                    case 1:
                        refMenu.menuProduct();
                        break;
                    case 2:
                        refMenu.menuCostumer();
                        break;
                    case 3:
                        refMenu.menuAdministrator();
                        break;
                    case 4:
                        refMenu.menuOrder();
                        break;
                    case 5:
                        refMenu.menuShoppingCart();
                        break;
                    default:
                        break;
                }
            }
            System.out.println("Email ou senha incorretos!");
        }
    }
    

}