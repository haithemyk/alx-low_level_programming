#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - will read the text file using stin operation and print to
 * posix standard output.
 * @filename: the name of file that will be treated.
 * @letters: the number of letters will print and read.
 * Return: the actual number of letters that should read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
	
	FILE *file;
	char *buffer;
	size_t bytes_read, bytes_written;
	if (filename == NULL)
		return (0);

    file = fopen(filename, "r");
    if (file == NULL)
	    return (0);

    buffer = (char *) malloc(letters + 1);
    if (buffer == NULL){
	    fclose(file);
	    return (0);
    }

    bytes_read = fread(buffer, sizeof(char), letters, file);
    if (bytes_read != letters && !feof(file)){
	    free(buffer);
	    fclose(file);
	    return (0);
    }

    buffer[bytes_read] = '\0';

    bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
    if (bytes_written != bytes_read){
	    free(buffer);
	    fclose(file);
	    return (0);
    }
    
    free(buffer);
    fclose(file);

    return (bytes_written);
}
