#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int
main(void)
{
  int fd;
  if ((fd = open("hello.c", O_RDONLY | O_CREAT)) == -1) {
    perror("can't open");
    exit(-1);
  }
  close(fd);

  return 0;
}
