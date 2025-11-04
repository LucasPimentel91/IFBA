package concreto;

import java.sql.Timestamp;

public class Partida {
    private String titulo;
    private Timestamp diaHora;
    private String localizacao;
    private String equipeA;
    private String equipeB;
    private String pontuacaoA;
    private String pontuacaoB;

    public Partida(String titulo, Timestamp diaHora, String localizacao, String equipeA, String equipeB, String pontuacaoA, String pontuacaoB){
        this.titulo = titulo;
        this.diaHora = diaHora;
        this.localizacao = localizacao;
        this.equipeA = equipeA;
        this.equipeB = equipeB;
        this.pontuacaoA = pontuacaoA;
        this.pontuacaoB = pontuacaoB;
    }
}
