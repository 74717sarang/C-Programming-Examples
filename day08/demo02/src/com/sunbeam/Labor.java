package com.sunbeam;

import java.util.Scanner;

public class Labor extends Employee {
	private int hours;
	private double rate;
	public Labor() {
		this.hours = 0;
		this.rate = 0.0;
	}
	public Labor(String name, int age, int id, String dept, int hours, double rate) {
		super(name, age, id, dept, 0.0);
		this.hours = hours;
		this.rate = rate;
		//super.setSalary(hours * rate);
		super.salary = hours * rate;
	}
	public int getHours() {
		return hours;
	}
	public void setHours(int hours) {
		this.hours = hours;
		super.salary = hours * rate;
	}
	public double getRate() {
		return rate;
	}
	public void setRate(double rate) {
		this.rate = rate;
		super.salary = hours * rate;
	}
	
	@Override
	public void accept() {
		Scanner sc = new Scanner(System.in);
		//TODO -- assignment
	}
	
	@Override
	public void display() {
		super.display();
		System.out.printf("Hours: %d\nRate: %.2f\n", 
						this.hours, this.rate);
	}
	
	// abstract method must be overridden in sub-class.
	@Override
	public double calcTotalSalary() {
		return this.salary;
	}
	// if not overridden, it remains abstract is sub-class 
	// 		and you must also make sub-class as abstract class.	
	
	@Override
	public String toString() {
		return super.toString() + ", Hours: " + this.hours + ", Rate: " + this.rate;
	}
}
