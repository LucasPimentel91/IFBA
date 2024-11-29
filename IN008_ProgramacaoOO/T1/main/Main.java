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
    Scanner scan = new Scanner(System.in);
    /*scan.close();

    FileOutputStream fileCreation = new FileOutputStream("config/database.bytej");

    ObjectOutputStream objectOUT = new ObjectOutputStream(new FileOutputStream("config/database.bytej"));
    objectOUT.writeObject(-- objeto instanciado--);
    objectOUT.close();
    

    ObjectInputStream objectIN = new ObjectInputStream(new FileInputStream("config/database.bytej"));
    [Classe] [nome_objeto] = (Classe) objectIN.readObject();
    object.IN.close();
     */
    
    public void login(){
        System.out.println("email: ");
        String email = scan.nextLine();
        System.out.println("senha: ");
        String senha = scan.nextLine();

    }

    public static void main(String[] args){
        FileOutputStream fileOUT = new FileOutputStream("C://Users//plact//OneDrive//Documentos//scripts//IFBA//IN008_ProgramacaoOO//T1//config//database.bytej");
        ObjectOutputStream objectOUT = new ObjectOutputStream(fileOUT);

        
    
    }
    

}