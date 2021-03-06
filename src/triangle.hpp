#pragma once

#include <vector>
#include <cmath>
#include <iostream>
#include "triangle_Interface.hpp"


using namespace std;

template<class T>
class Triangle: public triangleInterface<T> {

 private :
  T side1, side2, side3;

 public :


  //TODO: Implement ALL methods that are in triangle_interface.hpp

  Triangle();

  Triangle(T side1, T side2, T side3);

  /** Sets or modifies the sides of this triangle. Ensures that the new sides form a triangle. */
  void setSides(T newSide1, T newSide2, T newSide3) override;

  /** Gets the three sides of this triangle.
   * @return A vector containing the values of the sides. */
  std::vector<T> getSides() const override;

  /** Computes the area of this triangle. @return This triangle's area. */
  T getArea() const override;

  /** Computes the perimeter of this triangle. @return This triangle's perimeter. */
  //TODO define the perimeter function(look at the interfe)

  /** @return True if this triangle is a right triangle. */
  bool isRightTriangle() const override;

  /** @return True if this triangle is an equilateral triangle. */
  //TODO define the Equilateral... function(look at the interfe)

  /** @return True if this triangle is an isosceles triangle. */
  bool isIsosceles() const override;

};


template<class T>
Triangle<T>::Triangle() {
  //TODO
}

template<class T>
Triangle<T>::Triangle(T side1, T side2, T side3) {
  //TODO
}

template<class T>
void Triangle<T>::setSides(T newSide1, T newSide2, T newSide3) {
  //TODO
}

/** Gets the three sides of this triangle.
 * @return A vector containing the values of the sides. */
template<class T>
std::vector<T> Triangle<T>::getSides() const {
  //TODO
}

/** Computes the area of this triangle. @return This triangle's area. */
template<class T>
T Triangle<T>::getArea() const {

  //TODO
}

/** Computes the perimeter of this triangle. @return This triangle's perimeter. */
template<class T>
T Triangle<T>::getPerimeter() const {
  //TODO
}

//TODO declare+implement the missing method isRightTriangle()

/** @return True if this triangle is an equilateral triangle. */
template<class T>
bool Triangle<T>::isEquilateral() const {
  //TODO
}

//TODO declare+implement the missing method isIsosceles()