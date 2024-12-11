package utils;
import models.*;
import config.*;

public class Report {
    
    public static void reportProduct(ListsObjects list){
        Product refProduct=null;
        for(int i=0; i<list.products.size();i++){
            for(int num=0;num<list.products.size();num++){
                if(list.products.get(i).getStock() <= list.products.get(num).getStock()){
                    refProduct = list.products.get(i);
                    if((num + 1) == list.products.size()){
                        break;
                    }
                }else{
                    refProduct = list.products.get(num);
                    num = list.products.size();
                }
            }

        }
        System.out.println("Produto com menor estoque: ");
        refProduct.display();
    }
    public static void reportOrder(ListsObjects list){
        Order refOrder=null;
        for(int i=0; i<list.orders.size();i++){
            for(int num=0;num<list.orders.size();num++){
                if(list.orders.get(i).getTotalCost() >= list.orders.get(num).getTotalCost()){
                    refOrder = list.orders.get(i);
                    if((num + 1) == list.orders.size()){
                        break;
                    }
                }else{
                    refOrder = list.orders.get(num);
                    num = list.orders.size();
                }
            }

        }
        System.out.println("Pedido mais valioso: ");
        refOrder.display();
    }
}
