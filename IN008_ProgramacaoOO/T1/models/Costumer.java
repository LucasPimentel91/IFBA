package models;
import java.io.Serializable;
import java.util.ListResourceBundle;

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
        if(typeof(p) == OrderByProduct)
            this.shoppingCart.addProduct(p);
    }

    public void viewShoppingCart(ListsObjects list){
        if(typeof(list) == ListsObjects)
            this.shoppingCart.viewCart(list);
    }

    public float valeuShoppingCart(ListsObjects list){
        if(typeof(list) == ListsObjects){
            float result = this.shoppingCart.sumPrices(list);
            return result;
        }
        
    }

    
}
