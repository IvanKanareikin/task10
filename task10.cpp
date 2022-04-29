#include "Header.h"

int main()
{
    Student Vanya("Kanareykin", "Ivan", "Leonidovich", 18, true);
    Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
    Vanya.print();
    cout << endl;
    karpov.print();
}