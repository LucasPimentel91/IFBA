package abstracao;

public abstract class BaseDecorator implements Notificador{
    public Notificador inner;

    public BaseDecorator(Notificador notificador){
        this.inner = notificador;
    }

    @Override
    public void enviarMensagem(String texto) {
        inner.enviarMensagem(texto);
    }
}
