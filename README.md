# C - printf project:
Holberton school Toulouse | C19

## 📝DESCRIPTION:
The functions _printf() mirroring the function of C library "printf()".
printf() formatted text to the standard output.

## 📝PROTOTYPE:
`int _printf(const char *format, ...);`

![image](https://user-images.githubusercontent.com/113889290/201115294-982c74d1-45e2-4c41-8650-8645621f1da5.png)

## 📝CONVERSION SPECIFIERS - CS:
## 🔶Task 0:

| CS           | description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| %, %%| % arguments print a percent sign |
| %s | int arguments is converted to an char, and the resulting character is written
| %c | const char * argument is a pointer to an array of characters, that converts the corresponding argument to a character string. |

## 🔶Task 1:

| CS             | description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| %d | The int argument is converted to signed decimal notation, and the resulting is written |
| %i | The int arguement is converted to signed interger notation, and the resulting is written |


#### ✏Notes:
Right now the program doesnt count all the conversion specifiers

## 📝Files description:

| files names             | description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| get_functions.c | Contain the structur for get the operation function |
| main.c | Contain some of the test for test _printf function |
| main.h | Contain the struct and prototypes to the _printf function |
| man_3_printf | Contain the man page to the _printf function |
| op_functions.c | Contain all the function specifiers |
| printf.c | Contain the main function of the _printf |
| printf | Contain the script test |
| README.md | Project Readme.md |



#### 📃EXAMPLES:
In a script / program:  
`#include "main.h"`  
`printf("%s\n", "I love holberton !")`  
`_printf("%s\n","I love holberton !")`    
Output:  
`I love holberton !`

#### 📃COMPILATION:
compile:
`gcc -Wall -Werror -Wextra -pedantic *.c -o nameofthescipt`
execution: `./nameofthescipt`

## 🔶Task 2: 

### |Man Page:
execution: `man ./man_3_printf`

![image](https://user-images.githubusercontent.com/113889290/201114945-98ab7784-5a04-4457-bf88-ee65c20b48e0.png)

## 🗓ORGANISATION:

- TRELLO

- Diagrams link:  
`https://drive.google.com/file/d/1E6JAo6GfZqSo3VfyVijHlnVbf-x7zCHK/view?usp=sharing`

### ✍ |AUTHOR: 
🔸ParmigianiPauline
[![linkedin](https://img.shields.io/badge/linkedin-white?style=for-the-badge&logo=linkedin&logoColor=black)](https://www.linkedin.com/)

🔸TessierVanessa
[![linkedin](https://img.shields.io/badge/linkedin-white?style=for-the-badge&logo=linkedin&logoColor=black)](https://www.linkedin.com/in/vanessa-tessier-601794252/)

### 🎓 |SCHOOL:
Holberton School - TOULOUSE
C19 cohort
