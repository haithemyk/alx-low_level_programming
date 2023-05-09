#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - will create file with filename and fill it with text content
 * @filename:the name of file.
 * @text_content:content of the file
 * Return:1 in success -1 else.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
