# Day08 - Classwork

## Day07 assignment -- Question 2
```Java
class Player {
    // fields: id, name, age, and matchesPlayed
    // ...
}

class Batter extends Player {
    // fields: runs, average, and strikeRate
    // ...
}

class Bowler extends Player {
    // fields: wickets and economy
    // ... 
}

class Players {
    // static methods
    public static Player maxRunBatter(Player[] arr) {
        Batter max = null;
        int maxRuns = 0;
        for(Player p : arr) {
            if(p instanceof Batter) {
                Batter b = (Batter)p;
                if(b.getRuns() > maxRuns) {
                    maxRuns = b.getRuns();
                    max = b;
                }
            }
        }
        return max;
    }
}

class Program {
    public static void main(String[] args) {
        Player[] team = new Player[11];
        // initialize -- as shown in assignment
        Player player = Players.maxRunBatter(team);
        System.out.println("Max Run Batter: " + player.toString())
        System.out.println("Max Runs: " + player.getRuns());
    }
}
```

## Day07 assignment -- Question 3
* Refer screenshot

## demo01 - equals()
* Date class

## demo02 - abstract/interface
* abstract class Employee
* interface Acceptable, Displayable

## demo03 - interface
* interface Shape
* class Circle, Rectangle

## demo04 - Cloneable
* class Date
