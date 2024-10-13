package com.sunbeam;

import java.util.Scanner;

public class Person implements Acceptable, Displayable {
	private String name;
	private int age;
	public Person() {
		this.name = "";
		this.age = 0;
	}
	public Person(String name, int age) {
		this.name = name;
		this.age = age;
	}
	public final String getName() {
		return name;
	}
	public final void setName(String name) {
		this.name = name;
	}
	public final int getAge() {
		return age;
	}
	public final void setAge(int age) {
		this.age = age;
	}
	@Override
	public void accept() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Name: ");
		this.name = sc.next();
		System.out.print("Age: ");
		this.age = sc.nextInt();
	}
	@Override
	public void display() {
		System.out.printf("Name: %s\nAge: %d\n", this.name, this.age);
	}
	@Override
	public String toString() {
		return "Name: " + this.name + ", Age: " + this.age; 
	}
}
