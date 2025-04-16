#include <iostream>
#include <cmath>

struct Vector {
    int size; // Размер вектора
    double* data; // Массив значений вектора

    // Конструктор без аргументов
    Vector() : size(0), data(nullptr) {}

    // Конструктор с одним параметром
    Vector(int n) : size(n), data(new double[n])
    {
        for (int i = 0; i < size; ++i)
        {
            data[i] = 0.0;
        }
    }

    // Конструктор копирования
    Vector(const Vector& other) : size(other.size), data(new double[other.size])
    {
        for (int i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
    }

    // Деструктор
    ~Vector()
    {
        delete[] data;
    }

    // Функция умножения вектора на число
    Vector ScalarMultiply(double scalar)
    {
        Vector result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] * scalar;
        }
        return result;
    }

    // Функция сложения векторов
    Vector Addition(Vector other)
    {
        if (size != other.size)
        {
            throw std::invalid_argument("Векторы разных размерностей нельзя сложить.");
        }
        Vector result(size);
        for (int i = 0; i < size; ++i)
        {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Функция для вычисления скалярного произведения векторов
    double DotMultiply(Vector other)
    {
        if (size != other.size)
        {
            throw std::invalid_argument("Скалярное произведение нельзя вычислить для векторов разных размерностей.");
        }
        double result = 0.0;
        for (int i = 0; i < size; ++i)
        {
            result += data[i] * other.data[i];
        }
        return result;
    }

    // Метод для вычисления нормы вектора
    double Norm()
    {
        double SquaresSum = 0.0;
        for (int i = 0; i < size; ++i)
        {
            SquaresSum += data[i] * data[i];
        }
        return std::sqrt(SquaresSum);
    }
};

int main() {
    Vector v1(3);
    v1.data[0] = 1.0;
    v1.data[1] = 2.0;
    v1.data[2] = 3.0;

    Vector v2(3);
    v2.data[0] = 4.0;
    v2.data[1] = 5.0;
    v2.data[2] = 6.0;

    Vector result1 = v1.ScalarMultiply(2.0);
    Vector result2 = v1.Addition(v2);
    double result3 = v1.DotMultiply(v2);
    double result4 = v1.Norm();

    std::cout << "Векторы:" << std::endl;
    std::cout << "    v1: (" << v1.data[0] << ", " << v1.data[1] << ", " << v1.data[2] << ") " << std::endl;
    std::cout << "    v2: (" << v2.data[0] << ", " << v2.data[1] << ", " << v2.data[2] << ") " << std::endl;

    std::cout << std::endl;

    std::cout << "Операции с векторами:" << std::endl;
    std::cout << "    1)Умножения на число: ";
    std::cout << "( ";
    for (int i = 0; i < result1.size; ++i)
    {
        std::cout << result1.data[i] << " ";
    }
    std::cout << ")" << std::endl;

    std::cout << "    2)Сложения векторов: ";
    std::cout << "( ";
    for (int i = 0; i < result2.size; ++i)
    {
        std::cout << result2.data[i] << " ";
    }
    std::cout << ")" << std::endl;

    std::cout << "    3)Скалярное произведение векторов: " << result3 << std::endl;
    std::cout << "    4)Норма вектора: " << result4 << std::endl;

    return 0;
}