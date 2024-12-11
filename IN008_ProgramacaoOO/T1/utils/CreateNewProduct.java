package utils;
import models.*;
import config.ListsObjects;
import java.util.*;
import java.lang.*;

public class CreateNewProduct {
    private static Scanner scan = new Scanner(System.in);
    private static Random random = new Random();
    public static void createNewProduct(ListsObjects list){
        int id = random.nextInt(101);
        System.out.print("Nome do produto: ");
        String name = scan.nextLine();
        System.out.print("Descricao: ");
        String description = scan.nextLine();
        System.out.print("Preco: ");
        float price = Float.parseFloat(scan.nextLine());
        System.out.print("Estoque: ");
        int stock = Integer.parseInt(scan.nextLine());
        System.out.print("Categoria: ");
        String categoria = scan.nextLine();
        Product newProduct = new Product(id, name, description, price, stock, categoria);
        list.products.add(newProduct);
    }
}
