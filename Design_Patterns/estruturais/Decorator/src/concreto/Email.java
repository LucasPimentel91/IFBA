package concreto;

import abstracao.Notificador;

public class Email implements Notificador {
    @Override
    public void enviarMensagem(String texto) {
        System.out.print("\nEnviando SMTP: " + texto);
    }
}
