#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <setjmp.h>
#include <signal.h>
#include <dirent.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <errno.h>
#include <math.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>


typedef struct mst {
  char s[100];
} mst;
int main()
{
  mst s[1];
  strcpy(s[0].s, "hello world!!");
  mst *sp = s;
  printf("%ld, %ld, %ld, %s\n", sizeof(sigjmp_buf), sizeof(s), sizeof(*sp), (*sp).s);

}
