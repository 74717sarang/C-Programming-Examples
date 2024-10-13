package com.sunbeam;

public class Rectangle implements Shape {
	private double length;
	private double breadth;
	public Rectangle() {
		this.length = 0;
		this.breadth = 0;
	}
	public Rectangle(double length, double breadth) {
		this.length = length;
		this.breadth = breadth;
	}
	@Override
	public double calcArea() {
		return this.length * this.breadth;
	}
	@Override
	public double calcPeri() {
		return 2 * (this.length + this.breadth);
	}
	public double getLength() {
		return length;
	}
	public void setLength(double length) {
		this.length = length;
	}
	public double getBreadth() {
		return breadth;
	}
	public void setBreadth(double breadth) {
		this.breadth = breadth;
	}
	@Override
	public String toString() {
		return "Rectangle [length=" + length + ", breadth=" + breadth + "]";
	}
}
