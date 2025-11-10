import concreto.Arquivo;
import concreto.Pasta;

public class App {
    public void run() {
        Pasta pasta = new Pasta("Meus Arquivos", "C:\\User\\Documentos", 0);
        Pasta pasta2 = new Pasta("Meus Arquivos2", "C:\\User\\Documentos", 0);
        Arquivo arq = new Arquivo("Minhas anotacoes", "C:\\User\\Documentos\\Meus Arquivos", 2);
        Arquivo arq2 = new Arquivo("Minhas anotacoes2", "C:\\User\\Documentos\\Meus Arquivos", 2);
        Arquivo arq3 = new Arquivo("Minhas anotacoes3", "C:\\User\\Documentos\\Meus Arquivos", 2);

        pasta.addArmazem(arq);
        pasta.addArmazem(arq2);
        pasta2.addArmazem(pasta);
        pasta2.addArmazem(arq3);

        System.out.println("Tamanho da pasta " + pasta2.getNome() + ": " + pasta2.totalizarTamanho());
        System.out.println("Tamanho do arquivo " + arq3.getNome() + ": " + arq3.totalizarTamanho());
    }
}
