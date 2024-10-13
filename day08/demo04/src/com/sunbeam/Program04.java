package com.sunbeam;

public class Program04 {
	public static void main(String[] args) throws CloneNotSupportedException {
		Date d1 = new Date(1, 2, 2024);
		Date d2 = (Date) d1.clone();
		System.out.println("d1: " + d1.toString());
		System.out.println("d2: " + d2.toString());
	}
}
