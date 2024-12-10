package utils;
import models.*;
import config.*;

public class FinishOrder {
    public static void finishOrder(ListsObjects list, Costumer user){
        Order newOrder = new Order(1, "02/02/03", 10, user.valeuShoppingCart(list));
        //Print de finalização
        newOrder.display();
        list.orders.add(newOrder);
    }
}
