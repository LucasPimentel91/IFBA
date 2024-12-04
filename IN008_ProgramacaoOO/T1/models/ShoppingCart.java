package models;
import java.io.Serializable;
import java.util.*;


public class ShoppingCart implements Serializable{
    
    private LinkedList<Order> orders = new LinkedList<Order>();

    public void addOrder(Order order){
        this.orders.add(order);
    }
    
}
