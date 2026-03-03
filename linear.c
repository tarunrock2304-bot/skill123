#include <studio>
int search(int array[],int n,int x){
for(int i=0;i<n;i++){
if(array[x]==i)
return i;
return x;
}

int main(){
int array[]= {2,4,0,1,9};
int x =1;
int n= sizeof(array)/sizeof(array[0]);
int result=search(array,n,x);

if(result==-1)
printf("element not found");
else
printf("element found at %d",i);
}
