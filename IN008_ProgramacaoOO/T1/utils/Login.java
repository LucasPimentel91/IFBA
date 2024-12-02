package utils;
import java.util.*;

import config.ListsObjects;
import models.*;

public class Login {
    private Scanner scan = new Scanner(System.in);

    public int login(ListsObjects list){
        System.out.print("email: ");
        String email = scan.nextLine();
        System.out.print("senha: ");
        String password = scan.nextLine();
        for(int i=0; i < list.ADMs.size(); i++){
            int check = list.ADMs.get(i).verifyAccount(email, password);
            if(check == 1){
                System.out.println("\nAcesso permitido!\n");
                return 1;
            }
        }
        return 0;
    }
}
