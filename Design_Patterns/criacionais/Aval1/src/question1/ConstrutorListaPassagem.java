

public class ConstrutorListaPassagem implements Builder{
    public ListaPassagem listaPassagem;

    @Override
    public void init() {
        listaPassagem = new ListaPassagem();
    }

    @Override
    public void setCategoria(String tipo) {
    }

    @Override
    public void setCoordenadas(double latitude, double longitude) {

    }

    @Override
    public void setEscala(double medida) {

    }

    @Override
    public void setMapaECN(int medida) {

    }

    @Override
    public void setNumeroPrisms(int numero) {

    }

    public ListaPassagem resultado(){
        return listaPassagem;
    }
}
