#include <stdio.h>

/* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False. 
(iii) Depends.
*/
int main()
{
    int s[] = {1, 2, 3, 4, 5};
    printf("The element at position s[3] is %d", s[3]);
    return 0;
}

/*
Array indexing starts from 0, not 1.
So:
S[0] = 1st element
S[1] = 2nd element
S[2] = 3rd element
S[3] = 4th element

Also, *(S+3) is the same as S[3].
Therefore, *(S+3) refers to the 4th element, not the 3rd element.
Hence, the statement is False.
*/