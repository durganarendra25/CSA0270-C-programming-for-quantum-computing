#include<stdio.h>
struct player{
	char name[50];	
	int runs;
};
int main(){
	int n,total_runs=0;
	printf("Enter the number of players: ");
	scanf("%d",&n);
	struct player team[n];
	for (int i=0;i<n;i++){
	printf("Enter the name of players %d: ",i+1);
	scanf("%s",team[i].name);
	printf("Enter the runs scored by %s: ",team[i].name);
	scanf("%d",&team[i].runs);
	total_runs+=team[i].runs;		
	}
	printf("\n Batting information: \n");
	printf("players\t runs\n");
	for (int i=0;i<n;i++){
		printf("%s\t%d\n",team[i].name,team[i].runs);
	}
	printf("\n Total runs scored by the team:%d\n",total_runs);
	return 0;
}