/*Cagri Aksoy*/
#include <stdio.h>

#define MAX_SIZE_OF_KEY 5U
#define MAX_SIZE_OF_DATA 17U

int CompareDatawithKey(int *Data)
{
  const int glrox[MAX_SIZE_OF_KEY] = {71,76,82,79,88};
  int loopVar = 0u;
  int loopVar2 = 0u;
  int foundPieces = 0u;
  
  for(loopVar = 0u ; loopVar < MAX_SIZE_OF_DATA ; loopVar++)
  {

	if (foundPieces < MAX_SIZE_OF_KEY)
	{
		if(glrox[loopVar]!=Data[loopVar])
		{
			for(loopVar2 = 0u ; loopVar2 < MAX_SIZE_OF_DATA ; loopVar2++)
			{
			  if(glrox[loopVar] == Data[loopVar2])
			  {
				foundPieces++;
				break;
			  }
			  else
			  {
				/*Do Nothing*/
			  }
			  
			  if(loopVar2 == MAX_SIZE_OF_DATA-1)
			  {
				return 0u;
			  }
			  else
			  {
				/*Do Nothing*/
			  }
			}
		}
		else
		{
		  foundPieces++;
		}
	}
	else
	{
		return 1u;
	}
}
  printf("glrox: %d\n", foundPieces);
}

void GetTheData(int* Data)
{
  Data[0] = 71;
  Data[1] = 76;
  Data[2] = 82;
  Data[3] = 79;
  Data[4] = 88;
}

int main() 
{
   int Data = 0u;
   int result = 0u;
   GetTheData(&Data);
   result = CompareDatawithKey(&Data);
   printf("Result: %d\n",result);
   return 0;
}

