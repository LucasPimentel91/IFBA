package main;
import models.*;
import utils.*;
import config.*;
import menu.*;
import java.util.*;
import java.io.*;

public class Main{
    
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
            int answerLogin;
            answerLogin = refLogin.login(list);
            System.out.println("\n\n" + answerLogin + "\n");
            if(answerLogin != 0){
                String answerMenu = "open";
                while(!answerMenu.equals("Exit")){
                switch (answerLogin) {
                    case 1:
                        switch(refMenu.menuAdmin()){
                            case 1:
                                CreateNewProduct.createNewProduct(list);
                                break;
                            case 2: 
                                CreateNewUser.createNewUser(list);
                                break;
                            case 3:
                                Report.reportOrder(list);
                                break;
                            case 4:
                                Report.reportProduct(list);
                                break;
                            case 5:
                                answerMenu = "Exit";
                                break;
                            default:
                                break;
                        }
                        break;
                    case 2:
                        switch(refMenu.menuCostumer()){
                            case 1:
                                //StartNewOrder.startNewOrder(list, refLogin.getUser());
                                switch(refMenu.menuStartNewOrder()){
                                    case 1:
                                        AddProduct.addProduct(list, refLogin.getUser());
                                        break;
                                    case 2:
                                        ViewShoppingCart.viewShoppingCart(list, refLogin.getUser());
                                        break;
                                    case 3:
                                        FinishOrder.finishOrder(list, refLogin.getUser());
                                        break;
                                    default:
                                        break;
                                }
                                break;
                            case 2:
                                answerMenu = "Exit";
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        break;
                }
            }
            }
            System.out.println("Email ou senha incorretos!");
        }
    }
    

}