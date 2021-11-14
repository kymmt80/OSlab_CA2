#include "syscall.h"
#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int fd, i;
  int *sectors;

  if(argc <= 1){
   return 0;
  }

  if((fd = open(argv[i], 0)) < 0){
    printf(1, "cat: cannot open %s\n", argv[i]);
    return 0;
  }
  get_file_sectors(fd, &sectors);

  close(fd);

  
  return 1;
}