//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //Database database = new Database();
        Database database = Database.getInstance();

        database.setTipo_sgbd("MySQL");

        database.view_sgbd();

        Database database1 = Database.getInstance();

        database1.view_sgbd();

        //database.select();

    }
}