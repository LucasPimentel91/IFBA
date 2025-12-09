package concreto;

import abstracao.BaseDecorator;
import abstracao.Notificador;

public class EmailMarcaDagua extends BaseDecorator {
    public EmailMarcaDagua (Notificador notificador){
        super(notificador);
    }

    @Override
    public void enviarMensagem(String texto) {
        super.enviarMensagem(texto);
        System.out.print(" Marca d'agua.");
    }
}
