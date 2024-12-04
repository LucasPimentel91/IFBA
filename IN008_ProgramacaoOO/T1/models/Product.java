package models;

import java.io.Serializable;

public class Product implements Serializable
{
    
    private int id;
    private String name;
    private String description;
    private float price;
    private int stock;
    private String categoria;

    public Product(int id, String name, String description, float price, int stock, String categoria){
        this.id= id;
        this.name= name;
        this.description=description;
        this.price= price;
        this.stock=stock;
        this.categoria= categoria;
    }

    public void display(){
        System.out.println(this.id);
        System.out.println(this.name);
        System.out.println(this.price);
    }

    public void reduceStock(){
        --this.stock;
    }
    public float priceMultiply(int quantity){
        return this.price * quantity;
    }


}
