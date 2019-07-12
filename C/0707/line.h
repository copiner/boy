/*line.h*/
#idndef LINE_H
#define LINE_H

/****************************************************
 *clear_line: Clear the current line.               *
 ****************************************************/
void
clear_line(void);

/******************************************************
 *add_word: Adds word to the end of the current line. *
            if this is not the first word ont the line*
            puts one space before line.               *
******************************************************/
void
add_word(const char *word);

/*******************************************************
 *space_remaining: Return the number of charaters left *
                   in the current line.
 ******************************************************/
int
space_remaining(void);

/****************************************************
 *write_line: Write the current line                *
              with justification                    *
 ****************************************************/
void
write_line(void);

/****************************************************
 *flush_line: Write the current line without        *
              justification. If the line is empty,  *
              dose nothing                          *
 ****************************************************/

void
flush_line(void);

#endif
