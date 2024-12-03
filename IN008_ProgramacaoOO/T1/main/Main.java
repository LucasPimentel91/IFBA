package main;
import models.*;
import utils.*;
import config.*;
import menu.*;
import java.util.*;
import java.io.*;

public class Main{
    //Listas para as instâncias de objetos
    
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
        ListsObjects list = new ListsObjects();
        Administrator admim = new Administrator(0, "admin", "admin@marketplace.com", "12345");
        list.users.add(admim);

        /*FileOutputStream fileOUT = new FileOutputStream("C://Users//plact//OneDrive//Documentos//scripts//IFBA//IN008_ProgramacaoOO//T1//config//database.bytej");
        ObjectOutputStream objectOUT = new ObjectOutputStream(fileOUT);*/
        while(true){
            int num = refLogin.login(list);
            if(num != 0){
                switch (num) {
                    case 1:
                        refMenu.menuAdmin();
                        break;
                    case 2:
                        refMenu.menuCostumer();
                        break;
                    default:
                        break;
                }
            }
            System.out.println("Email ou senha incorretos!");
        }
    }
    

}