package models;

import java.io.Serializable;

public class Order implements Serializable {
    private int id;
    private String dataOrder;
    private Product refProduct;
    private int quantityProductPurchased;
    private float totalCost;

    public Order(int id, String dataOrder, Product refProduct, int quantityProductPurchased){
        this.id=id;
        this.dataOrder=dataOrder;
        this.quantityProductPurchased=quantityProductPurchased;
        this.refProduct = refProduct;
        this.totalCost= refProduct.priceMultiply(quantityProductPurchased);
    }
}
