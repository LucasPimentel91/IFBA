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

    public void display(){
        System.out.println("Pedido " + this.id);
        System.out.println(this.dataOrder);
        System.out.println(this.totalCost);
    }

    public float getTotalCost(){
        return this.totalCost;
    }
}
