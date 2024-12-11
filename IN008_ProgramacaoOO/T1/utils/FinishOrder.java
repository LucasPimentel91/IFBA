package utils;

import models.*;
import config.*;
import java.util.*;

public class FinishOrder {
    private static Random random = new Random();
    public static void finishOrder(ListsObjects list, Costumer user){
        Order newOrder = new Order(random.nextInt(101), "02/02/03", 10, user.valeuShoppingCart(list));
        //Print de finalização
        newOrder.display();
        list.orders.add(newOrder);
    }
}
