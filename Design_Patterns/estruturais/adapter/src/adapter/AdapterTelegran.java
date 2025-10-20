package adapter;

import cliente.ServiceMessage;
import services.Telegran;

public class AdapterTelegran extends Telegran implements ServiceMessage {
    @Override
    public void send(String message){
        super.send(message);
    }
}
