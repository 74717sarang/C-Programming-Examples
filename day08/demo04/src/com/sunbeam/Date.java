package com.sunbeam;

public class Date implements Cloneable {
	private int day, month, year;
	public Date() {
		this(1, 1, 2000);
	}
	public Date(int day, int month, int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}
	@Override
	public Object clone() throws CloneNotSupportedException {
		Object temp = super.clone(); //Object.clone()
		return temp;
	}
	public int getDay() {
		return day;
	}
	public void setDay(int day) {
		this.day = day;
	}
	public int getMonth() {
		return month;
	}
	public void setMonth(int month) {
		this.month = month;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		this.year = year;
	}
	@Override
	public String toString() {
		return this.day + "-" + this.month + "-" + this.year;
	}
	@Override
	public boolean equals(Object other) {
		if(other == null)
			return false;
		if(this == other)
			return true;
		if(!(other instanceof Date))
			return false;
		Date that = (Date) other;
		if(this.day == that.day && this.month == that.month && this.year == that.year)
			return true;
		return false;
	}
}






