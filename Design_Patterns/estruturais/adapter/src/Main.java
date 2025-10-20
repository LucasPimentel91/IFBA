import adapter.*;
import cliente.SistemaNotificacao;
import cliente.ServiceMessage;

public class Main{
    public static void main (String[] args){
        SistemaNotificacao sistema = new SistemaNotificacao("Funciona essa porraaaa");
        ServiceMessage sms = new AdapterSMS();
        sistema.addListService(sms);
        ServiceMessage email = new AdapterEmail();
        sistema.addListService(email);
        ServiceMessage whatsApp = new AdapterWhatsApp();
        sistema.addListService(whatsApp);
        ServiceMessage slack = new AdapterSlack();
        sistema.addListService(slack);
        ServiceMessage telegran = new AdapterTelegran();
        sistema.addListService(telegran);

        sistema.shotOfMessage();

    }
}