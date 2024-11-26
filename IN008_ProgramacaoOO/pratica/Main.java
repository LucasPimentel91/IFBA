public class Main
{
    public static void main(String [] args){
        Lista_Encadeada list = new Lista_Encadeada();
        list.insert(3);
        list.insert(4);
        list.insert(5);
        list.insert(5, 3);
        list.remove(2);
        list.display();
    }
}