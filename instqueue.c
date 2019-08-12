#include "open.h"
#include "strerr.h"
#include "exit.h"

extern void hier_queue();
extern int fdsourcedir;

#define FATAL "instqueue: fatal: "

void main()
{
  fdsourcedir = open_read(".");
  if (fdsourcedir == -1)
    strerr_die2sys(111,FATAL,"unable to open current directory: ");

  umask(077);
  hier_queue();
  _exit(0);
}
