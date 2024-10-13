package com.sunbeam;

import java.util.Scanner;

public class Salesman extends Employee {
	private int target;
	private double commission;
	public Salesman() {
		this.target = 0;
		this.commission = 0.0;
	}
	public Salesman(String name, int age, int id, double salary, int target, double commission) {
		super(name, age, id, "Sales", salary);
		this.target = target;
		this.commission = commission;
	}
	public int getTarget() {
		return target;
	}
	public void setTarget(int target) {
		this.target = target;
	}
	public double getCommission() {
		return commission;
	}
	public void setCommission(double commission) {
		this.commission = commission;
	}
	
	@Override
	public void accept() {
		Scanner sc = new Scanner(System.in);
		//TODO -- assignment
	}
	
	// non-abstract methods can be overridden in sub-class
	@Override
	public void display() {
		super.display();
		System.out.printf("Target: %d\nCommission: %.2f\n",
							this.target, this.commission);
	}
	
	// abstract method must be overridden in sub-class
	@Override
	public double calcTotalSalary() {
		return super.salary + this.commission;
	}

	@Override
	public String toString() {
		return super.toString() + ", Target: " + this.target + ", Commission: " + this.commission;
	}
}
