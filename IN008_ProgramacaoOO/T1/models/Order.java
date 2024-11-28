package models;

public class Order {
    private int id;
    private String dataOrder;
    private int quantityOrderPurchased;
    private float totalCost;

    public Order(int id, String dataOrder, int quantityOrderPurchased, float totalCost){
        this.id=id;
        this.dataOrder=dataOrder;
        this.quantityOrderPurchased=quantityOrderPurchased;
        this.totalCost=totalCost;
    }
}
