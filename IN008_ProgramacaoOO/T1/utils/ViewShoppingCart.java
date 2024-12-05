package utils;
import models.*;
import config.*;

public class ViewShoppingCart {
    public static void viewShoppingCart(ListsObjects list, Costumer user){
        user.getShoppingCart(list);
    }
}
