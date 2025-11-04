package abstratos;

public interface BuilderPersonagem {
    public void setAtaqueRapido(double quantidade);
    public void setAtaqueForca(double quantidade);
    public void setAtaqueEspecial(double quantidade);
    public void setDefesa(double quantidade);
    public void setMoedas(int quantidade);
    public void setHabilidade(Boolean valor);
}
