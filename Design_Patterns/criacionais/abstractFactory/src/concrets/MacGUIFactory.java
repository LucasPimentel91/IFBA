package concrets;

import abstracts.Botao;
import abstracts.GUIFactory;
import abstracts.Janela;

public class MacGUIFactory implements GUIFactory {

    public Botao criarBotao() {
        Botao b = new BotaoMac();
        return b;
    }


    public Janela criarJanela() {
        Janela j = new JanelaMac();
        return j;
    }
}
