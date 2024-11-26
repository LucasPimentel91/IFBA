package class;
import java.util.ArrayList;
public class Costumer extends User
{
    private String address;
    private Arraylist<Order> listOrders = new Arraylist<Order>();

    public Costumer(int id, String name, String email, String senha, String address){
        super(id, name, email, senha);
        this.address = address;
    }

    public void buy(){}
}
