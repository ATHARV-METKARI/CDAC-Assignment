/*Their are total 3 types of constant pointers
1)pointer to a constant variable
const int * ptr;
int *const ptr;
2)const pointer to a variable
int const *ptr;

3) const pointer to const variable
const int* const ptr;
*/



int main()
{

    int a=10;
    int b=20;

    int c=30;
    const int *ptr1=&a;//pointer to a const variable
    int *const ptr2=&b;//const pointer to a non const variable
    const int *const ptr3=&b;//const pointer to const variable

    return 0;
}
