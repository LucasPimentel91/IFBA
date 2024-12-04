package utils;
import java.util.*;
import config.ListsObjects;
import models.*;

public class Login {
    private Costumer refUser;
    private Scanner scan = new Scanner(System.in);

    public int login(ListsObjects list){
        System.out.print("email: ");
        String email = scan.nextLine();
        System.out.print("senha: ");
        String password = scan.nextLine();
        for(int i=0; i < list.users.size(); i++){
            int check = list.users.get(i).verifyAccount(email, password);
            if(check == 1){
                if(list.users.get(i) instanceof Administrator){
                    return 1;
                }else if(list.users.get(i) instanceof Costumer){
                    this.refUser = (Costumer)list.users.get(i);
                    return 2;
                }
            }
        }
        return 0;
    }

    public Costumer getUser(){
        return this.refUser;
    }
}
