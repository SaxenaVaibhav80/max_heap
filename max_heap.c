#include<stdio.h>
#define n 6
int max_heap[n];

void insert_heap(int i){
	
	int temp=0,temp2=0,temp3=0,flag=0;
	temp=i;
	temp2=temp;
	while(temp2>1)
	{
		temp2=temp/2;
		
		if(max_heap[temp2]<max_heap[temp])
		{
			temp3=max_heap[temp2];
			max_heap[temp2]=max_heap[temp];
			max_heap[temp]=temp3;
			flag=1;
			temp=temp2;
		}
		if(flag==0)
		{
			break;
		}
	}
}


int main()
{
//	max heap
int i=1,val=0;
for(i=1;i<=n;i++)
{
	scanf("%d",&max_heap[i]);
	insert_heap(i);
}

printf("This is max heap");
for(i=1;i<=n;i++)
{
	printf("\n%d",max_heap[i]);
}

	return 0;
}

