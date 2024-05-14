#include<stdio.h>
int size=-1,TQ=3,count=-1;

void enqueue(int queue[][6],int max,int data,int et)
{ // int st=0,wt=0;
	if(size==max-1)
	 printf("queue is full\n\n");
	else
	{queue[0][2]=0;
	 size++;
	 count++;
	 queue[size][0]=data;
	 queue[size][1]=size;
	 queue[size][2]=queue[size-1][2]+queue[size][1];
	 queue[size][3]=et;
	 if(et>3)
	  queue[size][4]=et=et-3;
	 else
	  queue[size][4]=0;
	 
	 if(et>3)
	  queue[size][5]=et-3;
	 else
	  queue[size][5]=0;
	  
	 printf("job is added\n\n");
	
	} 
	
	return;
}

/*void dequeue(int queue[][2])
{
	if(size==-1)
	 printf("queue is empty\n\n");
	else
	{
	 for(int i=0;i<size;i++){
	 	queue[i]=queue[i+1];
	 }
	  size--;
	  printf("data is removed\n\n");
	}
	return;
}
*/
void display(int array[][6])
{ if(size==-1)
     printf("array is empty\n");
    
  printf("job st wt  et  R1  R2\n"); 
  for(int i=0;i<=size;i++)
   {   for(int j=0;j<6;j++)
    	{printf("%d   ",array[i][j]); }
		printf("\n");
   }
   printf("\n\n");
}

int main()
{
	int max=8,m,data,et;
	int queue[max][6];
	int count=0;
	
			do{
			printf("entre 0-exit,1-job,2-dequeue,3-display job & starttime:");
			scanf("%d",&m);
			switch(m)
			{ case 1:
				printf("entre job:");
				scanf("%d",&data);
				count++;
				printf("entre execution time:");
				scanf("%d",&et);
				enqueue(queue,max,data,et);
				break;
		      case 2:
			    //dequeue(queue);
				break;
			  case 3:
			    display(queue);		
			}
			} while(m!=0);
		   return 0; 
}
