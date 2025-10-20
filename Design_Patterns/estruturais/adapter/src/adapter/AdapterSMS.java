package adapter;

import services.SMS;
import cliente.ServiceMessage;

public class AdapterSMS extends SMS implements ServiceMessage {
    @Override
    public void send(String message) {
        super.send(message);
    }
}
