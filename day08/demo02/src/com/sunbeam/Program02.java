package com.sunbeam;

public class Program02 {
	public static void main(String[] args) {
		// Employee e1 = new Employee(); // compiler error: cannot create object of abstract class
		// Employee e2 = new Employee("James Bond", 50, 7, "Action", 80000.0); // compiler error: cannot create object of abstract class
		
		Labor l1 = new Labor("John", 30, 8, "Production", 600, 50);
		l1.display();
		System.out.println("l1 Total Salary: " + l1.calcTotalSalary()); // inherited Employee.calcTotalSalary()
	
		Salesman s1 = new Salesman("Bill", 40, 2, 30000.0, 100, 500.0);
		s1.display();
		System.out.println("s1 Total Salary: " + s1.calcTotalSalary()); // Salesman.calcTotalSalary()
		
		// Every Salesman/Labor is a Employee. Salesman/Labor object can be referred by an Employee reference.
		Employee e = s1; // up-casting
		System.out.println("Employee s1 Salary: " + e.getSalary());
		//System.out.println("Salesman Target: " + e.getTarget()); // compiler error
		e.display(); // Salesman.display() called.
	}
}















