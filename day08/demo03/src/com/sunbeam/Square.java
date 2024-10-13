package com.sunbeam;

public class Square implements Shape {
	private double side;
	public Square() {
		this.side = 0.0;
	}
	public Square(double side) {
		this.side = side;
	}
	@Override
	public double calcArea() {
		return this.side * this.side;
	}
	@Override
	public double calcPeri() {
		return 4 * this.side;
	}
	public double getSide() {
		return side;
	}
	public void setSide(double side) {
		this.side = side;
	}
	@Override
	public String toString() {
		return "Square [side=" + side + "]";
	}
}
