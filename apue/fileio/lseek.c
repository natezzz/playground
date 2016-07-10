#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int
main(void)
{
  int fd;
  off_t off;

  if ((fd = open("a.txt", O_RDWR)) != -1) {
    off = lseek(fd, 0, SEEK_CUR);
    printf("Offset: %lld\n", off);
    close(fd);
  }

  if ((fd = open("a.txt", O_RDWR|O_APPEND)) != -1) {
    off = lseek(fd, 0, SEEK_END);
    printf("Offset: %lld\n", off);
    close(fd);
  }

  return 0;
}
