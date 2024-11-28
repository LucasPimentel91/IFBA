package models;

public class Product 
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


}
