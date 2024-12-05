package models;

import java.io.Serializable;

public class Order implements Serializable {
    private int id;
    private String dataOrder;
    
    private int quantityProductPurchased;
    private float totalCost;

    public Order(int id, String dataOrder, int quantityProductPurchased, float totalCost){
        this.id=id;
        this.dataOrder=dataOrder;
        this.quantityProductPurchased=quantityProductPurchased;
        this.totalCost=totalCost;
    }
}
