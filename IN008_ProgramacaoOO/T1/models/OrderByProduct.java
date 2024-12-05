package models;

public class OrderByProduct {
    private int idProduct;
    private int quantityProduct;

    public OrderByProduct(int id, int quantity){
        this.idProduct = id;
        this.quantityProduct = quantity;
    }

    public int getId(){
        return this.idProduct;
    }

    public int getQuantity(){
        return this.quantityProduct;
    }


}
