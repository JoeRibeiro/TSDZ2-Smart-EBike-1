#include <stdio.h>

void fred(void)
{
   printf("In fred()\n");
   goto done;
   printf("In middle\n");
done:
   printf("At end\n");
}

void joe(void)
{
   int b = 5678;

   printf("In joe()\n");

   {
      int c = 1234;
      printf("c = %d\n", c);
      goto outer;
      printf("uh-oh\n");
   }

outer:

   printf("done\n");
}

void henry(void)
{
   printf("In henry()\n");
   goto inner;

   {
      int b;
inner:
      b = 1234;
      printf("b = %d\n", b);
   }

   printf("done\n");
}

int main(void)
{
   fred();
   joe();
   henry();

   return 0;
}

/* vim: set expandtab ts=4 sw=3 sts=3 tw=80 :*/
