package utils;
import models.*;
import config.ListsObjects;
import java.util.*;
import java.lang.*;

public class CreateNewProduct {
    private static Scanner scan = new Scanner(System.in);
    public static void createNewProduct(ListsObjects list){
        int id = (int) Math.random() * 100;
        System.out.print("Nome do produto: ");
        String name = scan.nextLine();
        System.out.print("Descricao: ");
        String description = scan.nextLine();
        System.out.print("Preco: ");
        float price = scan.nextFloat();
        System.out.print("Estoque: ");
        int stock = scan.nextInt();
        System.out.print("Categoria: ");
        String categoria = scan.nextLine();
        Product newProduct = new Product(id, name, description, price, stock, categoria);
        list.products.add(newProduct);
    }
}
