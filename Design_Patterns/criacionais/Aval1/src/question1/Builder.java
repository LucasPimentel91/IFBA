public interface Builder {
    public void init();
    public void setCategoria(String tipo);
    public void setMapaECN(int medida);
    public void setEscala(double medida);
    public void setCoordenadas(double latitude, double longitude);
    public void setNumeroPrisms(int numero);
}
