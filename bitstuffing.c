#include<stdio.h>
int main()
{
int ip_frame[100],op_frame[200];
int i,j=0,n;
int count =0;
printf("enter frame length:");
scanf("%d",&n);
printf("enter input frame (0's and 1's only):/n");
for(i=0;i<n;i++){
scanf("%d",&ip_frame[i]);
}
for(i=0;i<n;i++){
op_frame[j++]=ip_frame[i];
if(ip_frame[i]==1){
count++;
if(count==5){
ip_frame[j++]=0;
count=0;
}
}else{
count=0;
}
}
printf("\n After bit stuffing the frame is:\n");
for(i=0;i<j;j++){
printf("%d",op_frame[i]);
}
printf("\n");
}
