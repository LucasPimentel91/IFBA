package models;
import java.io.Serializable;
import java.util.*;
import config.*;


public class ShoppingCart implements Serializable{
    
    private ArrayList<OrderByProduct> listProducts = new ArrayList<OrderByProduct>();
    public void addProduct(OrderByProduct p){  
        listProducts.add(p);
    }

    public void viewCart(ListsObjects list){
        for(OrderByProduct product : listProducts){
            for(Product refProduct : list.products){
                if(refProduct.verifyId(product.getId()))
                    refProduct.display();
            }

        }
    }

    public float sumPrices(ListsObjects list){
        float sum=0;
        for(OrderByProduct product : listProducts){
            for(Product refProduct : list.products){
                if(refProduct.verifyId(product.getId()))
                    sum+=refProduct.getPrice();
            }
        }
        return sum;
    }

    
    
}
