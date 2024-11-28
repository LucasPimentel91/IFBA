package main;
import models.Administrator;
import models.Costumer;
import models.User;
import models.Order;
import models.Product;
import models.ShoppingCart;
import java.io.*;

public class Main{
    ObjectOutputStream objectOUT = new ObjectOutputStream(new FileOutputStream("config/database.bytej"));
    /*objectOUT.writeObject(-- objeto instanciado--);
    objectOUT.close();
    */

    ObjectInputStream objectIN = new ObjectInputStream(new FileInputStream("config/database.bytej"));
    /*[Classe] [nome_objeto] = (Classe) objectIN.readObject();
    object.IN.close();
     */
    

    

}