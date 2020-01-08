#include<stdio.h>

int i,Vt=1, c=30, Vgs, Ids[6], Vds[]={0,1,2,3,4,5};

int main(){
Vgs=2;
while(Vgs<6){
        Ids[0]=0;
for( i=1;i<=5;i++){
    if(Vds[i]<(Vgs-Vt)){
        Ids[i]=c*(Vgs-Vt)*Vds[i];
    }
    else
    {
        Ids[i]=1/2*c*((Vgs-Vt)*(Vgs-Vt));

    }
//  printf("%d",Ids[i]);
}

  printf("\n%d\n\n",Vgs);
Vgs++;
}

return 0;
}
