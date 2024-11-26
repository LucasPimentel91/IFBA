public class Lista_Encadeada
{
    class Node { //Inner class
        public Object data; // Object: uma referência para qualquer classe
        public Node nextNode = null;
    }
    private Node firstNode = null;

    //Sobrecarga de insert:
    public void insert(Object data, int position){
        if(position < 0 || position > size()){
            System.out.println("Invalid insert position!");
            return;
        }
        Node newNode = new Node();
        newNode.data = data;
        Node nodeBeforeInsertion = null;
        for (int i=0;i<position;i++){
            nodeBeforeInsertion = nodeBeforeInsertion == null ? firstNode : nodeBeforeInsertion.nextNode;
        }
        if(nodeBeforeInsertion == null){
            newNode.nextNode = firstNode;
            firstNode = newNode;
        }else{
            newNode.nextNode = nodeBeforeInsertion.nextNode;
            nodeBeforeInsertion.nextNode = newNode;
        }
    }

    public int size(){
        int size=0;
        Node currentNode = firstNode;
        while(currentNode != null){
            size++;
            currentNode = currentNode.nextNode;
        }
        return size;
    }

    public void insert(Object data){
        Node newNode = new Node();
        newNode.data = data;
        if(firstNode == null){
            firstNode = newNode;
        }
        else{
            Node currentNode = firstNode;
            while(currentNode.nextNode != null){
                currentNode = currentNode.nextNode;
            }
            currentNode.nextNode = newNode;
        }

    }

    public void remove(int position){
        if(position < 0 || position >= size()){
            System.out.println("Invalid insert position!");
            return;
        }
        Node nodeBeforeRemove = null;
        for (int i=0;i<position;i++){
            nodeBeforeRemove = nodeBeforeRemove == null ? firstNode : nodeBeforeRemove.nextNode;
        }
        if(nodeBeforeRemove == null){
            firstNode = firstNode.nextNode;
        }else{
            nodeBeforeRemove.nextNode = nodeBeforeRemove.nextNode.nextNode;
        }

    }

    public int index(Object data){
        return 0;
    }

    public void display(){
        Node currentNode = firstNode;
        while(currentNode != null){
                System.out.println(currentNode.data);
                currentNode = currentNode.nextNode;
            }
            
    }
}