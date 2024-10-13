package com.sunbeam;

public class Circle implements Shape {
	private double radius;
	public Circle() {
		this.radius = 0.0;
	}
	public Circle(double radius) {
		this.radius = radius;
	}
	@Override
	public double calcArea() {
		return PI * this.radius * this.radius;
	}
	@Override
	public double calcPeri() {
		return 2 * PI * this.radius;
	}
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	
	@Override
	public String toString() {
		return "Circle [radius=" + radius + "]";
	}
}
