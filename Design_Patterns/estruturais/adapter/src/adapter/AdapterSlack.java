package adapter;

import cliente.ServiceMessage;
import services.Slack;

public class AdapterSlack extends Slack implements ServiceMessage {
    @Override
    public void send(String message) {
        super.send(message);
    }
}
