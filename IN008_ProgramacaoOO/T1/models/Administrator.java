package models;

import java.io.Serializable;

public class Administrator extends User implements Serializable
{
    public Administrator(int id, String name, String email, String senha){
        super(id, name, email, senha);
    }
    
}