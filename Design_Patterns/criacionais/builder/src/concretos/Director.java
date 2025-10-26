package concretos;

import abstratos.BuilderAutomotivo;

import java.util.ArrayList;

public class Director {
    public ArrayList<BuilderAutomotivo> listaBuilders = new ArrayList<>();


    public void fazerVeiculo(int qtdRodas, int qtdPortas, String motor){
        for(BuilderAutomotivo builder : listaBuilders){
            builder.reset();
            builder.adicionarMotor(motor);
            builder.adicionarRodas(qtdRodas);
            builder.adicionarPortas(qtdPortas);
        }

    }
}
