package utils;
import java.util.*;

public class Login {

    private static Scanner scan = new Scanner(System.in);

    public static int login(){
        System.out.print("email: ");
        String email = scan.nextLine();
        System.out.print("senha: ");
        String password = scan.nextLine();
        for(Administrator adm : ADMs){
            int check = adm.verifyAccount(email, password);
            System.out.println("\n\n" + check + "\n");
            if(check == 1){
                System.out.println("\nAcesso permitido!\n");
                return 1;
            }
        }
        return 0;
    }
}
