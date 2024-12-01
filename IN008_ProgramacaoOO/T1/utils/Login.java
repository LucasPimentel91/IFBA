package utils;
import java.util.*;

import config.ListsObjects;
import models.*;

public class Login {
    private static ListsObjects list = new ListsObjects();
    private static Scanner scan = new Scanner(System.in);

    public int login(){
        System.out.print("email: ");
        String email = scan.nextLine();
        System.out.print("senha: ");
        String password = scan.nextLine();
        int num = list.ADMs.size();
        System.out.println("\n\n"+num+"\n");
        for(int i=0; i < list.ADMs.size(); i++){
            System.out.println("\n\nEntrei no laço\n");
            int check = list.ADMs.get(i).verifyAccount(email, password);
            System.out.println("\n\n" + check + "\n");
            if(check == 1){
                System.out.println("\nAcesso permitido!\n");
                return 1;
            }
        }
        return 0;
    }
}
