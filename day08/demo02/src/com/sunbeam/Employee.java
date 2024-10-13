package com.sunbeam;

import java.util.Scanner;

public abstract class Employee extends Person {
	private int id;
	private String dept;
	protected double salary;
	public Employee() {
		this.id = 0;
		this.dept = "";
		this.salary = 0.0;
	}
	public Employee(String name, int age, int id, String dept, double salary) {
		super(name, age);
		this.id = id;
		this.dept = dept;
		this.salary = salary;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getDept() {
		return dept;
	}
	public void setDept(String dept) {
		this.dept = dept;
	}
	public double getSalary() {
		return salary;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
	@Override
	public void accept() {
		Scanner sc = new Scanner(System.in);
		//TODO -- assignment
	}
	@Override
	public void display() {
		super.display();
		System.out.printf("Id: %d\nDept: %s\nSalary: %.2f\n",
				this.id, this.dept, this.salary);
	}
	
	// if method doesn't have any logical implementation to be done,
	// the method should be declared abstract.
	// abstract methods doesn't have implementation/body. { ... }
	public abstract double calcTotalSalary();
	
	@Override
	public String toString() {
		return super.toString() + ", Id: " + this.id + ", Dept: " + this.dept + ", Salary: " + this.salary;
	}
}
