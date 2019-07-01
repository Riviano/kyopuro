#include<stdio.h>
int main(){
  int n,min = 1000000,temp=0,i;
  scanf("%d",&n);
  int a[1000];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]<0){ a[i] = a[i]*-1;}
  }
  for(i=0;i-1<n;i++){
    if(a[i]>a[i+1]){

      temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
    }
  }
  for(i=0;i-1<n;i++){
    if((a[i+1]-a[i])<min){
      min = (a[i+1]-a[i]);
    }
  }
  printf("%d",min);
  return 0;
}
  
