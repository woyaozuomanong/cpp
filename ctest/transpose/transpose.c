#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>


double cpuSecond()
{
	struct timeval tp;
	gettimeofday(&tp,NULL);
	return ((double)tp.tv_sec+(double)tp.tv_usec*1e-6);
}



void initialData(int *ip,int size)
{
	//generate different seed for random number
	time_t t;
	srand((unsigned) time(&t));
	printf("Initialization start...\n");
	for(int i=0;i<size;i++)
	{
		ip[i]=(int)(rand() & 0xF)/10;
	}
}

void transposebyrow(int* in,int* out,int i,int j)
{
	for(int itemp=0;itemp<i;itemp++)
	{
		for(int jtemp=0;jtemp<j;jtemp++)
			out[jtemp*i+itemp]=in[itemp*j+jtemp];
	}
}

void transposebycol(int *in,int *out,int i,int j)
{
	for(int jtemp=0;jtemp<j;jtemp++)
	{
		for(int itemp=0;itemp<i;itemp++)
			out[jtemp*i+itemp]=in[jtemp*i+itemp];
	}
}
int main(int argc,char** argv)
{
	printf("%s Starting...\n",argv[0]);

	//set up data size of vectors
	int col=2*(1<<9);
	int row=1<<9;
	printf("Array size %d * %d\n",row,col);

        int in[row*col],outbyrow[col*row],outbycol[col*row];
	double iStart,iElaps;

	//initialize data at host side
	iStart=cpuSecond();
	initialData(in,row*col);
	iElaps=cpuSecond()-iStart;
	printf("Initialize data at host side, time elapsed:%f sec\n",iElaps);

	memset(outbyrow,0,row*col*sizeof(int));
	memset(outbycol,0,row*col*sizeof(int));


	//add array by row
	iStart=cpuSecond();
        transposebyrow(in,outbyrow,row,col); 
	iElaps=cpuSecond()-iStart;
	printf("Execution by row elapsed %f sec\n",iElaps);
	
	//add array by col
	iStart=cpuSecond();
        transposebycol(outbyrow,in,row,col); 
	iElaps=cpuSecond()-iStart;
	printf("Execution by col elapsed %f sec\n",iElaps);
	

	return(0);
}
