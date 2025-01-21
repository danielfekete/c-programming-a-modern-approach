#ifndef LINE_H
#define LINE_H

void clear_line(void);

/**
 * @brief Adds word to the end of the current line. If this is not he first word on the line, puts one space before word.
 * 
 * @param word 
 */

void add_word(const char *word);

/**
 * @brief Returns the number of characters left in the current line.
 * 
 * @return int 
 */

int space_remaining(void);

/**
 * @brief Writes the current line with justification.
 * 
 */

void write_line(void);

/**
 * @brief Writes the current line without justification. If the line is empty, does nothing.
 * 
 */
void flush_line(void);

#endif
