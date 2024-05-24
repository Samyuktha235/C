//
// Created by skarth597 on 5/20/2024.
//
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    char *inputFile = NULL;
    char *outputFile = NULL;
    int verboseFlag = 0;

    // Process command line arguments using getopt
    while ((opt = getopt(argc, argv, "i:o:v")) != -1) {
        switch (opt) {
            case 'i':
                inputFile = optarg;
                break;
            case 'o':
                outputFile = optarg;
                break;
            case 'v':
                verboseFlag = 1;
                break;
            case '?':
                fprintf(stderr, "Usage: %s -i inputfile -o outputfile -v\n", argv[0]);
                return 1;
            default:
                fprintf(stderr, "Unexpected error during argument processing.\n");
                return 1;
        }
    }

    // Additional processing based on the parsed arguments
    if (inputFile != NULL) {
        printf("Input file: %s\n", inputFile);
    }

    if (outputFile != NULL) {
        printf("Output file: %s\n", outputFile);
    }

    if (verboseFlag) {
        printf("Verbose mode is enabled.\n");
    }

    // Perform the main logic of the program based on the parsed arguments

    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
typedef struct {
    char *name;
    int age;
} Person;

// Function to create a person
Person* create_person(const char *name, int age) {
    Person *p = (Person *)malloc(sizeof(Person));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    p->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
    if (p->name == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(p);
        return NULL;
    }
    strcpy(p->name, name);
    p->age = age;
    return p;
}

// Function to free a person
void free_person(Person *p) {
    free(p->name);
    free(p);
}

// Function to print a person
void print_person(const Person *p) {
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

int main() {
    int num_people = 3;
    Person **people = (Person **)malloc(num_people * sizeof(Person *));
    if (people == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    people[0] = create_person("Alice", 30);
    people[1] = create_person("Bob", 25);
    people[2] = create_person("Charlie", 35);

    for (int i = 0; i < num_people; i++) {
        if (people[i] != NULL) {
            print_person(people[i]);
        }
    }

    for (int i = 0; i < num_people; i++) {
        if (people[i] != NULL) {
            free_person(people[i]);
        }
    }

    free(people); // Intentionally causing a memory leak for people[0]->name, people[1]->name, and people[2]->name

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add a string to the array
char** add_string(char **array, int *size, const char *str) {
    array = (char **)realloc(array, (*size + 1) * sizeof(char *));
    if (array == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        return NULL;
    }
    array[*size] = (char *)malloc((strlen(str) + 1) * sizeof(char));
    if (array[*size] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return array;
    }
    strcpy(array[*size], str);
    (*size)++;
    return array;
}

// Function to print the array of strings
void print_array(char **array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", array[i]);
    }
}

// Function to free the array
void free_array(char **array, int size) {
    for(int i=0;i<size;i++)
    {
        free(array[i]);
    }
    free(array);
}

int main() {
    char **array = NULL;
    int size = 0;

    array = add_string(array, &size, "Hello");
    array = add_string(array, &size, "World");
    array = add_string(array, &size, "Memory Leak Example");

    print_array(array, size);

    free_array(array, size);  // Intentionally causing a memory leak

    return 0;
}*/
/*
#include <stdio.h>

#include <stdlib.h>

#include <string.h>

        void create() {

    char *leak = (char *)malloc(100 * sizeof(char));
    if(leak==NULL)
    {
        return;
    }
    strcpy(leak, "This is a memory leak example");
    free(leak);
}

void another() {

    int *numbers = (int *)malloc(50 * sizeof(int));
    if(numbers==NULL)
    {
        return;
    }
    // Some operations on numbers
    free(numbers);

}

int main() {

    create();

    another();

    char *name = (char *)malloc(50 * sizeof(char));
    if(name==NULL)
    {
        printf("Memory is not allocated");
        return -1;
    }
    strcpy(name, "No leak here");

    printf("%s\n", name);

    free(name);

    return 0;

}

*/

/*#include <stdio.h>

void removeDuplicates(int *arr, int *size) {
    // TODO: Remove duplicates from the sorted array in-place
    int len=0,j=1;
    for(int i=0;i<*size;i++)
    {
        if(arr[i]!=arr[j])
        {
            arr[len++]=arr[i];
            printf("arr[i]=%d,arr[len]=%d\n",arr[i],arr[len]);
        }
    }
     *size=len;
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    // TODO: Call the removeDuplicates function and print the modified array
    int n = sizeof(nums)/sizeof(int);
    removeDuplicates(nums,&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = arr;
    int *ptr2 = arr + 2;

    // TODO: Print the values pointed to by ptr1 and ptr2
    printf("ptr1=%d\n",*ptr1);
    printf("ptr2=%d\n",*ptr2);
    return 0;
}*/
/*#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, Pointers!";
    // char *ptr = /* TODO: Initialize ptr to point to the first character of str ;
    char *ptr =str;
    // TODO: Print each character of str using the pointer
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c",*(ptr+i));
    }
    return 0;
}*/

/*#include <stdio.h>

int* createArray(int size) {
    // TODO: Create and return an array of integers of the given size
    int *ptr;
    int arr[]={1,2,3};
    ptr=arr;
    return ptr;
}

int main() {
    int *arr;

    // TODO: Call the createArray function with a size of 3, and print the elements of the returned array
    arr=createArray(3);
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(arr+i));
    }
    // TODO: Free the allocated memory
    free(arr);
    return 0;
}*/

/*#include<stdio.h>
void swap(int *a, int *b) {
    // TODO: Swap the values pointed to by a and b
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x,&y);
    printf("x=%d,y=%d",x,y);
    // TODO: Call the swap function and print the values of x and y after swapping

    return 0;
}*/

/*#include <stdio.h>

void square(int *num) {
    // TODO: Modify the value pointed to by num to its square
    *num=55;
}

int main() {
    int x = 5;

    // TODO: Call the square function and print the modified value of x
    square(&x);
    printf("%d",x);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // int *ptr = TODO: Initialize ptr to the first element of arr ;
    int *ptr = arr;

    // Print the elements of arr using the pointer
    for (int i = 0; i < 5; i++) {
       // TODO: Print each element using the pointer
        printf("%d ",*(ptr+i));
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    // Print the value of x using the pointer
    //printf("Value of x: %d\n",  TODO: Complete this line );
    printf("Value of x: %d\n",*ptr);
    return 0;
}*/
/*#include <stdio.h>

int main() {
    unsigned char uc = 255;
    signed char sc = -128; //-127 128
    int large = 300;

    // Cast large to unsigned char
    unsigned char uc_large = (unsigned char)large; //45
    printf("large as unsigned char: %u\n", uc_large);

    // Cast uc to signed char
    signed char sc_uc = (signed char)uc; //128
    printf("uc as signed char: %d\n", sc_uc);

    // Cast sc to unsigned int
    unsigned int ui_sc = (unsigned int)sc; //128
    printf("sc as unsigned int: %u\n", ui_sc);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int x = -5;
    unsigned int y = 10;


    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is not less than y\n"); //this is the answer because comparing
        //between signed and unsigned converts the signed to unsigned
        //using casting methods which turn out the signed to be the larger positive interger
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a = 12; //01100
    int b = 25; //11001

    // Swap a and b using XOR
    a = a ^ b; //a=10101 --> 21
    b = a ^ b; // b= 01100 -->12
    a = a ^ b; //a = 11001 -->25
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int a = 10, b = 5;
    a += b; //a=15
    b -= a; //b=-10
    a *= 2; //a=30
    b /= 3; //b=-3
    a %= 3; //a=0

    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/

/*#include <stdio.h>


int main() {
    float x = 0.1;
    float y = 0.2;

    if (x + x == y) {
        printf("x + x == y\n");
    } else {
        printf("x + x != y\n");
    }

    if (x * 2 == y) {
        printf("x * 2 == y\n");
    } else {
        printf("x * 2 != y\n");
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;

    double result = a + b * c / a - (int)c % a;  //3 + 4.5 * 5.25 / 3 - 5 % 3 7.875 8.875000
    printf("Result: %lf\n", result);

    return 0;
}
*/
