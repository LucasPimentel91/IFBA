package models;
import java.io.Serializable;
import java.util.ArrayList;
public class Costumer extends User implements Serializable
{
    private String address;
    private ArrayList<Order> listOrders = new ArrayList<Order>();
    public Costumer(int id, String name, String email, String senha, String address){
        super(id, name, email, senha);
        this.address = address;
    }

    public void buy(){}
}
