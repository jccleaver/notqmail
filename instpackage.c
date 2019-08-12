#include "open.h"
#include "strerr.h"
#include "exit.h"

extern void hier();
extern int fdsourcedir;

#define FATAL "instpackage: fatal: "

void main()
{
  fdsourcedir = open_read(".");
  if (fdsourcedir == -1)
    strerr_die2sys(111,FATAL,"unable to open current directory: ");

  umask(077);
  hier();
  _exit(0);
}
