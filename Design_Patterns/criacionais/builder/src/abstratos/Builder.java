package abstratos;

public interface Builder {
    public void reset();
    public void adicionarRodas(int quantidade);
    public void adicionarMotor(String nome);
    public void adicionarPortas(int quantidade);
}

