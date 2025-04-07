package models;

import java.io.Serializable;

public class User implements Serializable
{
    private int id;
    private String name;
    private String email;
    private String password;

    public User(int id, String name, String email, String password){
        if(typeof(id) == Integer && (typeof(name) == String || name != null) && (typeof(email) == String || email != null) && (typeof(password) == String || password != null)){
            this.id=id;
            this.name=name;
            this.email=email;
            this.password=password;
        }
    }

    public int verifyAccount(String email, String password){
        //Ver a necessidade de equals em vez de "=="
        if(this.email.equals(email) && this.password.equals(password))
            return 1;
        return 0;
    }

}