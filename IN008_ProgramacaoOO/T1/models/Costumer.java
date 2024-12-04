package models;
import java.io.Serializable;
import java.util.ArrayList;
public class Costumer extends User implements Serializable
{
    private String address;
    private ShoppingCart shoppingCart;
    public Costumer(int id, String name, String email, String password, String address){
        super(id, name, email, password);
        this.address = address;
    }

    public void feedingShoppingCart(Order order){
        this.shoppingCart.addOrder(order);
    }
}
