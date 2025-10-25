public class Database {

    private static Database database;
    private String tipo_sgbd;

    private Database(){}

    public static Database getInstance(){
        if(database == null){
            database = new Database();
            return  database;
        }
        return database;
    }

    public void insert(){
        System.out.println("Inserindo dados...");
    }

    public void update(){
        System.out.println("Atualizando dados...");
    }

    public void select(){
        System.out.println("Vizualizando dados...");
    }

    public void delete(){
        System.out.println("Deletando dados...");
    }

    public void setTipo_sgbd(String tipo_sgbd) {
        this.tipo_sgbd = tipo_sgbd;
    }

    public void view_sgbd(){
        System.out.println("SGBD: " + tipo_sgbd);
    }
}
