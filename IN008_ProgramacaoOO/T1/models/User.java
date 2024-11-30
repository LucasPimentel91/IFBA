package models;

import java.io.Serializable;

public class User implements Serializable
{
    private int id;
    private String name;
    private String email;
    private String password;

    public User(int id, String name, String email, String password){
        this.id=id;
        this.name=name;
        this.email=email;
        this.password=password;
    }

    public int verifyAccount(String email, String password){
        //Ver a necessidade de equals em vez de "=="
        if(this.email == email && this.password == password)
            return 1;
        return 0;
    }
}