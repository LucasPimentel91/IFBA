package models;

public class Administrator extends User
{
    public Administrator(int id, String name, String email, String senha){
        super(id, name, email, senha);
    }
    //Outra classe:
    public void registerProduct(){}
    public void registerCostumer(){}
    //Outra classe:
    public void updateProduct(){}
    public void updateCostumer(){}
    public void updateOrder(){}
    //Outra classe:
    public void deleteProduct(){}
    public void deleteCostumer(){}
    public void deleteOrder(){}
    //Outra classe:
    public void reportsProductScarce(){}
    public void reportsOrderValuable(){}
}