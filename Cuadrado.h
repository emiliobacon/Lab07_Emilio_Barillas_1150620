#pragma once
#include "Poligono.h"
class Cuadrado :
    public Poligono
{
protected:
    double lado;
public:
    Cuadrado(string figura, string color, int ID, double lado) :Poligono(figura, color, ID) {
        this->lado = lado;
    }

    double calcularArea() override {
        return this->lado * this->lado;
    }
    double calcularPerimetro() override {
        return this->lado * 4;
    }
    int id()override {
        return this->ID;
    }
    string getColor() override {
        return this->color;
    }
    string getFigura() override {
        return this->figura;
    }
};
