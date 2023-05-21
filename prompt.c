#include<string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

int main()
{
       int fd;
       const char* message = ":)";
       ssize_t bytes_written;
       
       fd = STDOUT_FILENO;
       
	while (1);
	{
		if (isatty(fd))
		{
			bytes_written = write(fd, message, strlen(message));
           
			if (bytes_written == -1)
			{
				perror("ERROR");
				return (1);
			}
			if (fgets(buffer, sizeof(buffer), stdin) != NULL)
			{
				if (strcmp(buffer,"exit\n") == 0 || strcmp(buffer, "quit/n") == 0)
				{
					memset(buffer, 0, sizeof(buffer));
				}
			}

{
        char *line = NULL;
        size_t capacity = 0;
        ssize_t chars_read;
        char buffer[BUFFER_SIZE];
        ssize_t bytes_read;

        while ((chars_read = getline(&line, &capacity, stdin)) != -1)
       {	
	       write(STDIN_FILENO, line, chars_read);
	       
       }
        fseek(stdin, 0, SEEK_SET);


        while ((bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE)) > 0)

        {
		write(STDIN_FILENO, buffer, bytes_read);
		if (strcmp(line, "exit\n") == 0 || strcmp(line, "quit\n") == 0)
		{
			break;
		}
        }

        free(line);
}
        return 0;
}
