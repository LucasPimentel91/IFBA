package concreto;

import abstrato.Calendario;

import java.sql.Timestamp;

public class FabricaAbstrataCalendarioEsportivo {
    public Calendario createCalendario(){
        return new CalendarioEsportivo();
    }

    public Partida createPartida(String titulo, Timestamp diaHora, String localizacao, String equipeA, String equipeB, String pontuacaoA, String pontuacaoB){
        return new Partida(titulo, diaHora, localizacao, equipeA, equipeB, pontuacaoA, pontuacaoB);

    }
}
