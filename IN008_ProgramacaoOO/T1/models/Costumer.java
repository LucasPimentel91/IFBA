package models;
import java.io.Serializable;

public class Costumer extends User implements Serializable
{
    private String address;
    private ShoppingCart shoppingCart;
    public Costumer(int id, String name, String email, String password, String address){
        super(id, name, email, password);
        this.address = address;
        this.shoppingCart = new ShoppingCart();
    }

    public void feedingShoppingCart(Order order){
        this.shoppingCart.addOrder(order);
    }

    
}
