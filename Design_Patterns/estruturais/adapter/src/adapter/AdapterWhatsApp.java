package adapter;

import cliente.ServiceMessage;
import services.WhatsApp;

public class AdapterWhatsApp extends WhatsApp implements ServiceMessage {
    @Override
    public void send(String message) {
        super.send(message);
    }
}
