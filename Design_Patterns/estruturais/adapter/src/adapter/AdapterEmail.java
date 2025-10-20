package adapter;

import services.Email;
import cliente.ServiceMessage;

public class AdapterEmail extends Email implements ServiceMessage {
    @Override
    public void send(String message) {
        super.send(message);
    }
}
