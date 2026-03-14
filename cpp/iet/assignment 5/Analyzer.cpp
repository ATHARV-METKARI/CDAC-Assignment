/*
Q.1. Create a class Analyzer that stores numbers dynamically.

Requirements:
Accept number of elements N.
Dynamically allocate array.
Accept numbers.
Find and print:
Maximum number
Minimum number
Average value
*/

#include<iostream>
using namespace std;

class Analyzer
{
    int *ptr;
    int length = 0;

    public:
    Analyzer(int length);
    void setArray(int i, int j);
    void getArray();
};

Analyzer::Analyzer(int length)
{
    this->length = length;
    ptr = new int[this->length];
}

void Analyzer::setArray(int i, int j)
{
    ptr[i] = j;
}

void Analyzer::getArray()
{
    int max = ptr[0];
    int min = ptr[0];
    int sum = 0;

    for(int i = 0; i < length; i++)
    {
        if(ptr[i] > max)
            max = ptr[i];

        if(ptr[i] < min)
            min = ptr[i];

        sum += ptr[i];
    }

    double avg = (double)sum / length;

    cout << "Maximum Number: " << max << endl;
    cout << "Minimum Number: " << min << endl;
    cout << "Average Value: " << avg << endl;
}

int main()
{
    int n, num;

    cout << "Enter number of elements: ";
    cin >> n;

    Analyzer a(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        a.setArray(i, num);
    }

    a.getArray();

    return 0;
}