#include <vector>
#include <climits>
#include <iostream>
using namespace std;

class Polynomial
{
private:
    int *degCoeff;
    int capacity;

public:
    Polynomial()
    {
        degCoeff = new int[5];
        capacity = 5;
        for (int i = 0; i < capacity; i++)
        {
            degCoeff[i] = 0;
        }
    }
    Polynomial(int capacity)
    {
        degCoeff = new int[capacity];
        this->capacity = capacity;
        for (int i = 0; i < this->capacity; i++)
        {
            degCoeff[i] = 0;
        }
    }
    Polynomial(Polynomial const &p)
    {
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }
    void operator=(Polynomial const &p)
    {
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }

    void print() const
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
            {
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
        cout << endl;
    }

    void setCoefficient(int degree, int coefficient)
    {
        while (degree >= capacity)
        {
            int *newDegCoeff = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newDegCoeff[i] = degCoeff[i];
            }
            for (int i = capacity; i < 2 * capacity; i++)
            {
                newDegCoeff[i] = 0;
            }
            delete[] degCoeff;
            degCoeff = newDegCoeff;
            capacity *= 2;
        }
        degCoeff[degree] = coefficient;
    }
    int *getDegCoeff()
    {
        return degCoeff;
    }
    Polynomial operator+(Polynomial const &p) const
    {
        int maxCap = (this->capacity > p.capacity) ? (this->capacity) : (p.capacity);
        Polynomial newP(maxCap);
        for (int i = 0; i < maxCap; i++)
        {
            if (i < this->capacity && i < p.capacity)
            {
                newP.degCoeff[i] = this->degCoeff[i] + p.degCoeff[i];
            }
            else if (i < this->capacity)
            {
                newP.degCoeff[i] = this->degCoeff[i];
            }
            else
            {
                newP.degCoeff[i] = p.degCoeff[i];
            }
        }
        return newP;
    }
    Polynomial operator-(Polynomial const &p) const
    {
        int maxCap = (this->capacity > p.capacity) ? (this->capacity) : (p.capacity);
        Polynomial newP(maxCap);
        for (int i = 0; i < maxCap; i++)
        {
            if (i < this->capacity && i < p.capacity)
            {
                newP.degCoeff[i] = this->degCoeff[i] - p.degCoeff[i];
            }
            else if (i < this->capacity)
            {
                newP.degCoeff[i] = this->degCoeff[i];
            }
            else
            {
                newP.degCoeff[i] = -1 * p.degCoeff[i];
            }
        }
        return newP;
    }

    Polynomial operator*(Polynomial const &p) const
    {
        int newCap = this->capacity + p.capacity;
        Polynomial newP(newCap);
        for (int i = 0; i < this->capacity; i++)
        {
            for (int j = 0; j < p.capacity; j++)
            {
                newP.degCoeff[i + j] += this->degCoeff[i] * p.degCoeff[j];
            }
        }
        return newP;
    }
};

int main()
{
    int count1, count2, choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for (int i = 0; i < count1; i++)
    {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++)
    {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++)
    {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for (int i = 0; i < count2; i++)
    {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++)
    {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++)
    {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    switch (choice)
    {
        // Add
    case 1:
    {
        Polynomial result1 = first + second;
        result1.print();
        break;
    }
        // Subtract
    case 2:
    {
        Polynomial result2 = first - second;
        result2.print();
        break;
    }
        // Multiply
    case 3:
    {
        Polynomial result3 = first * second;
        result3.print();
        break;
    }
    case 4: // Copy constructor
    {
        Polynomial third(first);
        if (third.getDegCoeff() == first.getDegCoeff())
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }

    case 5: // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.getDegCoeff() == first.getDegCoeff())
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }
    }

    return 0;
}
