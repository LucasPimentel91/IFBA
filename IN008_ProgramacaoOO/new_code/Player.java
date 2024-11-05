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
    

    public void duel(Player duelist){
        while(true){
        this.energy = ((this.sword==false && this.energy >= this.Min_energy) ? this.energy *= 10 : this.energy);
        duelist.energy = ((duelist.sword==false && duelist.energy >= duelist.Min_energy) ? duelist.energy *= 10 : duelist.energy);
        if(duelist.energy > this.energy){
            duelist.energy++;
            this.energy--;
        }
        else{
            duelist.energy--;
            this.energy++;
        }

        if(this.energy <= 0 || duelist.energy <= 0){
            if(this.energy <= 0){
                System.out.print(this.name + "ganhou");
                break;
            }
            else{
                System.out.print(duelist.name + "ganhou");
                break;
            }

        }


    }

}

    public static void main(String [] args){
        Player player1 = new Player("Lucas", 10);
        Player player2 = new Player("John", 10);

        player1.increaseEnergy(50);
        player2.increaseEnergy(50);


    }
    
}
