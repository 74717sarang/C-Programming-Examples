package com.sunbeam;

public class Program03 {
	public static void main(String[] args) {
		Shape r = new Rectangle(7, 4); // up-casting
		System.out.println("Rect Area:" + r.calcArea());
		System.out.println("Rect Peri:" + r.calcPeri());

		Shape s = new Square(5); // up-casting
		System.out.println("Sqr Area:" + s.calcArea());
		System.out.println("Sqr Peri:" + s.calcPeri());
	
		Shape c = new Circle(7); // up-casting
		System.out.println("Circle Area:" + c.calcArea());
		System.out.println("Circle Peri:" + c.calcPeri());
		
		//Shape x = new AnyShape();
		//System.out.println("Area:" + x.calcArea());
		//System.out.println("Peri:" + x.calcPeri());
	}
}
