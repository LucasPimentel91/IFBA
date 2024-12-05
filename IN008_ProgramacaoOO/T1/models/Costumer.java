package models;
import java.io.Serializable;
import config.*;

public class Costumer extends User implements Serializable
{
    private String address;
    private ShoppingCart shoppingCart;
    public Costumer(int id, String name, String email, String password, String address){
        super(id, name, email, password);
        this.address = address;
        this.shoppingCart = new ShoppingCart();
    }

    public void feedingShoppingCart(OrderByProduct p){
        this.shoppingCart.addProduct(p);
    }

    public void getShoppingCart(ListsObjects list){
        this.shoppingCart.viewCart(list);
    }

    
}
