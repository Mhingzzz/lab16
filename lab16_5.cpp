#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int slot[] = {*a, *b, *c, *d};
	int k = rand()%4;
	int round = 1;
	
	*a = slot[k];
	slot[k] = 0;

	while (round != 0)
	{
		k = rand()%4;
		if (slot[k] == 0)
		{
			continue;
			}
			else{

			*b = slot[k];
			slot[k] = 0;

			for (int i = 0; i < 4; i++)
			{
				if (slot[i] != 0)
				{
					*c = slot[i];
					slot[i] = 0;
					break; 
				}
				
			}

			for (int j = 0; j < 4; j++)
			{
				if (slot[j] != 0)
				{
					*d = slot[j];
					break;
				}
			}
			
			round = 0;
		}

		
	}
}
