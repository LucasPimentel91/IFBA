package services;

import cliente.ServiceMessage;

public class WhatsApp implements ServiceMessage {
    public void send(String message){
        System.out.println("WhatsApp enviado - " + message);
    }
}
