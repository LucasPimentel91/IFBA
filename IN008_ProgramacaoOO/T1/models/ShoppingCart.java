package models;
import java.io.Serializable;
import java.util.ArrayList;


public class ShoppingCart implements Serializable{
    
    private ArrayList<Order> orders = new ArrayList<Order>();

    public void displayListOrders(){}
}
