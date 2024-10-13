package com.sunbeam;

import java.util.Objects;

public class Program01 {
	public static void main(String[] args) {
		Date d1 = new Date(28, 9, 1983);
		Date d2 = new Date(28, 9, 1983);
		
		boolean flag = (d1 == d2);
		System.out.println("Reference Comparision: " + flag);
	
		flag = d1.equals(d2);
		System.out.println("Date.equals() Comparision: " + flag);
		
		flag = Objects.equals(d1, d2);
		System.out.println("Objects.equals() Comparision: " + flag);
		
		flag = d1.equals(null);
		System.out.println("Date.equals(null) Comparision: " + flag);

		flag = d1.equals("1-1-2024");
		System.out.println("Date.equals(String) Comparision: " + flag);
	}
}
