package concrets;

import abstracts.Botao;
import abstracts.GUIFactory;
import abstracts.Janela;

public class WindowsGUIFactory implements GUIFactory {

    public Botao criarBotao() {
        Botao b = new BotaoWindows();
        return b;
    }

    public Janela criarJanela() {
        Janela j = new JanelaWindows();
        return j;
    }
}
