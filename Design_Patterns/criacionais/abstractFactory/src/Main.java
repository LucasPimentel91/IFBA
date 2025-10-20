import app.Cliente;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Cliente cli1 = new Cliente();
        cli1.solicitarGUI("WINDOWS");
        cli1.run();

        Cliente cli2 = new Cliente();
        cli2.solicitarGUI("MAC");
        cli2.run();
    }
}