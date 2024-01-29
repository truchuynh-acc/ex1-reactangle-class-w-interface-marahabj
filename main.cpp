/**
Programmer: marahh abujabal
Project number: 1
Project Desc: Rectangle Class with Interface
Course: COSC 2436 III Data Structures
Date:   01/28/2024
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

/**
 * @class Rectangle
 * @brief An abstract class representing a rectangle.
 */
class Rectangle {
public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~Rectangle() = default;

    /**
     * @brief Set the dimensions of the rectangle.
     * @param newLength The new length of the rectangle.
     * @param newWidth The new width of the rectangle.
     * @return True if successful, false otherwise.
     */
    virtual bool set(double newLength, double newWidth) = 0;

    /**
     * @brief Get the length of the rectangle.
     * @return The length of the rectangle.
     */
    virtual double getLength() const = 0;

    /**
     * @brief Get the width of the rectangle.
     * @return The width of the rectangle.
     */
    virtual double getWidth() const = 0;

    /**
     * @brief Get the area of the rectangle.
     * @return The area of the rectangle.
     */
    virtual double getArea() const = 0;
};

#endif // RECTANGLE_H


#ifndef RECTANGLE_IMPL_H
#define RECTANGLE_IMPL_H



/**
 * @class RectangleImpl
 * @brief A concrete implementation of the Rectangle class.
 */
class RectangleImpl : public Rectangle {
private:
    double length;
    double width;

public:
    RectangleImpl();

    bool set(double newLength, double newWidth) override;

    double getLength() const override;

    double getWidth() const override;

    double getArea() const override;

    ~RectangleImpl() override;
};

#endif // RECTANGLE_IMPL_H




RectangleImpl::RectangleImpl() : length(1.0), width(1.0) {}

bool RectangleImpl::set(double newLength, double newWidth) {
    if (newLength > 0.0 && newWidth > 0.0) {
        length = newLength;
        width = newWidth;
        return true;
    } else {
        return false;
    }
}

double RectangleImpl::getLength() const {
    return length;
}

double RectangleImpl::getWidth() const {
    return width;
}

double RectangleImpl::getArea() const {
    return length * width;
}

RectangleImpl::~RectangleImpl() {
    // Destructor implementation (empty for this example)
}


#include <iostream>


int main() {
    // Your testing code here
    RectangleImpl rectangle;

    // Testing set method
    if (rectangle.set(2.5, 3.5)) {
        // Update successful
        std::cout << "Rectangle dimensions updated successfully\n";
    } else {
        // Update failed
        std::cout << "Invalid dimensions provided. Update failed.\n";
    }

    // Testing get methods
    std::cout << "Length: " << rectangle.getLength() << std::endl;
    std::cout << "Width: " << rectangle.getWidth() << std::endl;
    std::cout << "Area: " << rectangle.getArea() << std::endl;

    return 0;
}


