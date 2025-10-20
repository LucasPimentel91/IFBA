package app;

import abstracts.GUIFactory;
import concrets.MacGUIFactory;
import concrets.WindowsGUIFactory;

public class Cliente {

    public GUIFactory fabricaAbstrata;

    public void solicitarGUI(String tipo){
        switch (tipo){
            case "WINDOWS":
                this.fabricaAbstrata = new WindowsGUIFactory();
                break;
            case "MAC":
                this.fabricaAbstrata = new MacGUIFactory();
                break;
        }

    }

    public void run(){
        fabricaAbstrata.criarBotao().Executar();
        fabricaAbstrata.criarJanela().renderizar();
    }

}
