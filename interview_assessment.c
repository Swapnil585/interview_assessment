/*
	question :-
		Construct an application. The application should request input numbers from the user
		every five seconds for a total of one minute.
		For further actions, all user inputs submitted within a minute should be used. (The userinput numbers should only be taken into account if they are odd numbers and should not be repeated.)
		The application must create a character array of size equal to the maximum input number
		from user-supplied numbers. User inputs should be treated as bit position in array and set to 1. Print both the new array and the old array to finish.

	Points to consider:
	1) All relevant errors and failure cases should be managed
	2) Please provide proper comments in Doxygen format as per relevance
	3) Embedded c to be used
	4) Any compiler can be used
	5) Output and code to be shared  

	i did not undstand of used of old array and new array please find below code as per my understanding. 
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // for sleep function

/**
 * @brief Set the bit at the given position to 1
 * 
 * @param arr The array
 * @param position The position of the bit to set
 */
void setBit(char *ptr_array, int position) {
    ptr_array[position] = 1;
}

/**
 * @brief Check if the bit at the given position is set
 * 
 * @param arr The array
 * @param position The position of the bit to check
 * @return true If the bit is set
 * @return false If the bit is not set
 */
bool isBitSet(char *ptr_array, int position) {
    return ptr_array[position] == 1;
}

int main() {
    int input;
    int max_array_size = 2;

    char *ptr_old_array = (char*)malloc(sizeof(char) * max_array_size);
    char *ptr_new_array = (char*)malloc(sizeof(char) * max_array_size);

    // Timer for one minute
    for (int i = 0; i < 12; i++) { // 12 iterations for 1 minute with 5 seconds delay
        printf("Please Enter a number: ");
        scanf("%d", &input);

        if (input <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            continue;
        }

        if (input > max_array_size) {
            max_array_size = input; 
            ptr_old_array = (char*)realloc(ptr_old_array, sizeof(char) * max_array_size);
            ptr_new_array = (char*)realloc(ptr_new_array, sizeof(char) * max_array_size);
        }

        if (input % 2 != 0 && !isBitSet(ptr_old_array, input)) {
            setBit(ptr_old_array, input-1);
            setBit(ptr_new_array, input-1);
        }

        sleep(5); // Wait for 5 seconds
    }

    // Print old array
    printf("\nOld Array: ");
    for (int i = 0; i < max_array_size; i++) {
        printf("%d ", ptr_old_array[i]);
    }

    // Print new array
    printf("\nNew Array: ");
    for (int i = 0; i < max_array_size; i++) {
        printf("%d ", ptr_new_array[i]);
    }

	// Print max size of array
    printf("\nmax_array_size = %d ", max_array_size);

    // Free allocated memory
    free(ptr_old_array);
    free(ptr_new_array);

    return 0;
}

/*
compile output:-
Swapnil_nerkar@swapnil-ThinkBook-14-G3-ACL:~$ ./interview_assessment 
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 12
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 11

Old Array: 1 0 0 0 0 0 0 0 0 0 1 0 
New Array: 1 0 0 0 0 0 0 0 0 0 1 0 
max_array_size = 12

---------------------------------------------------------------------------------------------------------
Swapnil_nerkar@swapnil-ThinkBook-14-G3-ACL:~$ ./interview_assessment 
Please Enter a number: 2
Please Enter a number: 4
Please Enter a number: 6
Please Enter a number: 8
Please Enter a number: 10
Please Enter a number: 12
Please Enter a number: 14
Please Enter a number: 16
Please Enter a number: 18
Please Enter a number: 20
Please Enter a number: 22
Please Enter a number: 24

Old Array: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
New Array: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
max_array_size = 24

-------------------------------------------------------------------------------------------------------------
Swapnil_nerkar@swapnil-ThinkBook-14-G3-ACL:~$ ./interview_assessment 
Please Enter a number: 1
Please Enter a number: 2
Please Enter a number: 3
Please Enter a number: 4
Please Enter a number: 5
Please Enter a number: 6
Please Enter a number: 7
Please Enter a number: 8
Please Enter a number: 9
Please Enter a number: 10
Please Enter a number: 11
Please Enter a number: 12

Old Array: 1 0 1 0 1 0 1 0 1 0 1 0 
New Array: 1 0 1 0 1 0 1 0 1 0 1 0 
max_array_size = 12
---------------------------------------------------------------------------------------------------------------
Swapnil_nerkar@swapnil-ThinkBook-14-G3-ACL:~$ ./interview_assessment 
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3
Please Enter a number: 3

Old Array: 0 0 1 
New Array: 0 0 1 
max_array_size = 3

*/