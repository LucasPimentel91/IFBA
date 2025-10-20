package cliente;

import java.util.ArrayList;

public class SistemaNotificacao {
    private String message;
    private ArrayList <ServiceMessage> listServices = new ArrayList<ServiceMessage>();
    //public ServiceMessage service;

    public SistemaNotificacao(String message){
        this.message = message;

    }

    public void addListService(ServiceMessage service){
        this.listServices.add(service);
    }

    public void send(ServiceMessage service){
        service.send(message);
    }

    public void shotOfMessage(){
        for(ServiceMessage service : listServices){
            send(service);
        }
    }

}
