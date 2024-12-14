# fractalPlotting

## General Notes

What is a fractal?

Self similar shapes are a subset of Fractals in general: Shapes that are perfectly self similar, when you zoom in on them you get an original copy of the original

### Fractal dimensions

There is not only 1 - 2 or 3 dimensions. A word that can generalize length, area, volume can be defined as "mass".
Fractal dimensions is basically how the mass of shapes changes as you scale them. When you scale a line by 1/2 its mass becomes 1/2. When you scale
a square of 1/2 its mass becomes 1/4..... This is basically line = (1/2)^1 cause dimension is 1 square = (1/2)^2 because dimension is 2 and so on.

So basically the mass is the scaling factor at the power of the dimension.

So for example if we have a scaling factor of 1/3 it will be 1.5 dimensionals

### Fractal definition

Given this fractals are shapes with non integer dimensions

### Mandlebrot set

f(z) = z^2 +c , where c is a complex number
The steps are:

- Map each pixel to a complex number, if the number is in the Mandlebrot set then you mark it as black

But how do I check if

## Compile

mkdir build
cd build
cmake ..

cmake --build .
./build/bin/main
