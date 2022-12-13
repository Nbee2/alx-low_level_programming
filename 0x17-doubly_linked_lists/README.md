0x17. C - Doubly linked lists
Write a function that frees a `dlistint_t` list.

-   Prototype: `void free_dlistint(dlistint_t *head);`

```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197==
0
1
2
3
4
98
402
1024
==4197==
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197==
==4197== All heap blocks were freed -- no leaks are possible
==4197==
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `4-free_dlistint.c`

### 5\. Get node at index

mandatory



Write a function that returns the nth node of a `dlistint_t` linked list.

-   Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
-   where `index` is the index of the node, starting from `0`
-   if the node does not exist, return `NULL`

```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `5-get_dnodeint.c`

### 6\. Sum list

mandatory



Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

-   Prototype: `int sum_dlistint(dlistint_t *head);`
-   if the list is empty, return `0`

```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 6-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `6-sum_dlistint.c`

### 7\. Insert at index

mandatory



Write a function that inserts a new node at a given position.

-   Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
-   where `idx` is the index of the list where the new node should be added. Index starts at `0`
-   Returns: the address of the new node, or `NULL` if it failed
-   if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction

```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 7-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c`

### 8\. Delete at index

mandatory



Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

-   Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
-   where `index` is the index of the node that should be deleted. Index starts at `0`
-   Returns: `1` if it succeeded, `-1` if it failed

```
julien@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `8-delete_dnodeint.c`

### 9\. Crackme4

#advanced



Find the password for [crackme4](https://github.com/holbertonschool/0x17.c "crackme4").

-   Save the password in the file `100-password`
-   Your file should contain the exact password, no new line, no extra space
-   Hint: The program prints "OK" when the password is correct

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `100-password`

### 10\. Palindromes

#advanced



A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009` = `91` × `99`.

Find the largest palindrome made from the product of two 3-digit numbers.

-   Save the result in the file `102-result`
-   Your file should contain the exact result, no new line, no extra space

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `102-result`

### 11\. crackme5

#advanced



Write a keygen for [crackme5](https://github.com/holbertonschool/0x17.c "crackme5").

-   Usage of the crackme: `./crackme5 username key`
-   The crackme will segfault if you do not enter the correct key for the user
-   Usage for your keygen: `./keygen5 username`
-   Your keygen should print a valid key for the `username`

```
julien@ubuntu:~/0x17$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
julien@ubuntu:~/0x17$ ./crackme5 julien javascript
Segmentation fault (core dumped)
julien@ubuntu:~/0x17$ ./crackme5 julien `./keygen5 julien`
Congrats!
julien@ubuntu:~/0x17$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `103-keygen.c`