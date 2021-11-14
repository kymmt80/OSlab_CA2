#include "types.h"
#include "user.h"
#include "fcntl.h"
#include "stat.h"

int
main(int argc, char *argv[])
{
  int fd;
  uint *sectors;

 char buf[] = "However, those pointers are never set to point to "
  "some memory"
"But that does not matter near as much as the problem that the code "
"is reading the input into that array of pointers. It should be rea"
"ding the input into where the pointers point, however that requi"
"res that the pointers actually point to memory that the applica"
"tion owns."
"the following:"
"cleanly compiles"
"properly checks for errors (but does not always handle them "
"correctly as the "
"code should cleanup at any/every exit point"
"documents why each header file is included"
"indents the code for readability by us humans"
"for readability, applies appropriate horizontal spacing"
"for readability, separates code blocks via a single blank line"
"only declares variables at (or just before) they are used."
"uses the source code file untitled1.c for the input."
"uses define statements to give any 'magic' numbers meaningful names."
"the 'while()' loop will exit if line too long or too many lines or "
"EOF encountered"
"uses a valid second parameter to the call to fopen."
"The following code is one way to implement the functionality""However, those pointers are never set to point to "
  "some memory"
"But that does not matter near as much as the problem that the code "
"is reading the input into that array of pointers. It should be rea"
"ding the input into where the pointers point, however that requi"
"res that the pointers actually point to memory that the applica"
"tion owns."
"the following:"
"cleanly compiles"
"properly checks for errors (but does not always handle them "
"correctly as the "
"code should cleanup at any/every exit point"
"documents why each header file is included"
"indents the code for readability by us humans"
"for readability, applies appropriate horizontal spacing"
"for readability, separates code blocks via a single blank line"
"only declares variables at (or just before) they are used."
"uses the source code file untitled1.c for the input."
"uses define statements to give any 'magic' numbers meaningful names."
"the 'while()' loop will exit if line too long or too many lines or "
"EOF encountered"
"uses a valid second parameter to the call to fopen."
"The following code is one way to implement the functionality"
"However, those pointers are never set to point to "
  "some memory"
"But that does not matter near as much as the problem that the code "
"is reading the input into that array of pointers. It should be rea"
"ding the input into where the pointers point, however that requi"
"res that the pointers actually point to memory that the applica"
"tion owns."
"the following:"
"cleanly compiles"
"properly checks for errors (but does not always handle them "
"correctly as the "
"code should cleanup at any/every exit point"
"documents why each header file is included"
"indents the code for readability by us humans"
"for readability, applies appropriate horizontal spacing"
"for readability, separates code blocks via a single blank line"
"only declares variables at (or just before) they are used."
"uses the source code file untitled1.c for the input."
"uses define statements to give any 'magic' numbers meaningful names."
"the 'while()' loop will exit if line too long or too many lines or "
"EOF encountered"
"uses a valid second parameter to the call to fopen."
"The following code is one way to implement the functionality";
    if(open("test.txt", O_RDONLY) >= 0){
        unlink("test.txt");
    }
    fd = open("test.txt", O_CREATE|O_WRONLY);
    write(fd, buf, sizeof(buf));

  get_file_sectors(fd, sectors);
  
  for (int i = 0; i < sectors[0]; i++)
  {
    printf(1, "%d \n",sectors[i+1]);
  }

  close(fd);
  exit();

}