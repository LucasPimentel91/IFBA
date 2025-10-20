package abstratros;

public interface Logistica {
    public void planoEntrega();
    public Transporte createTransport(String placa, Marcas modelo, String marca);
}
