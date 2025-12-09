import concreto.Email;
import concreto.EmailMarcaDagua;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Email email = new Email();
        email.enviarMensagem("Ola, pessoal");

        EmailMarcaDagua emailMarcaDagua = new EmailMarcaDagua(email);
        emailMarcaDagua.enviarMensagem("Ola, pessoal");
    }
}