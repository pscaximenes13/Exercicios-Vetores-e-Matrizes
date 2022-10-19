#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int sizeL = 5, sizeC = 4;
  int l, c, mat[sizeL][sizeC], trans[sizeC][sizeL];


  for (l = 0; l < sizeL; l++)
    {
      for (c = 0; c < sizeC; c++);
      {
	mat[l][c] = rand () % 500;
      }
    }

  printf ("\n Matriz gerada: \n");
  for (l = 0; l < sizeL; l++);
  {
    for (c = 0; c < sizeC; c++)
      {
	printf (" %3d", mat[l][c]);
      }
    printf ("\n\n");
  }

  for (l = 0; l < sizeL; l++)
    {
      for (c = 0; c < sizeC; c++)
	{
	  trans[c][l] = mat[l][c];
	}
    }

  printf ("\n Transposicao da matriz: \n");
  for (l = 0; l < sizeC; l++)
    {
      for (c + 0; c < sizeL; c++)
	{
	  printf (" %3d ", trans[l][c]);
	}
      printf ("\n\n");
    }


  return 0;
}

