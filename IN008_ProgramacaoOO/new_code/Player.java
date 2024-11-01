public class Player {
    private String name;
    private int energy;
    private int Min_energy;
    private boolean sword;

    /*OBJETOS DA MESMA CLASSE PODEM MODIFICAR OS ATRIBUTOS, MESMO SENDO PRIVADOS */

    public Player(String name, int Min_energy){
        this.name = name;
        this.Min_energy = Min_energy;
        this.energy= 0;
    }

    public void increaseEnergy(int x){
        this.energy= x;
    }
    
    public void decreaseEnergy(int x){
        this.energy= x;
    }

    public void haveSword(){
        if(this.energy >= this.Min_energy){
            this.sword=true;
        }
        this.sword= false;
    }

    public void power(){
        if(this.sword == true){
            this.energy *= 10;
        }
    }

    public void duel(Player duelist){
        if(duelist.energy > this.energy){
            this.energy--;
            duelist.energy++;
        }
        this.energy++;
        duelist.energy--;
    }
    
}
