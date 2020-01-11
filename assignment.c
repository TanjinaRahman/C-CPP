#include<stdio.h>

int i,j,Vt=1, c=30, Vgs=2, Ids,Vds,diff;

int main(){

for(j=0;j<4;j++){
  //printf("j=%d\n",j);
        for( Vds=0;Vds<6;Vds++){
            if(Vds<(Vgs-Vt)){
                Ids=c*(((Vgs-Vt)*Vds)-(Vds*Vds)/2);
            }
            else if(Vds>=(Vgs-Vt))
            {
                Ids=c*((Vgs-Vt)*(Vgs-Vt))/2;
                //printf("??");

            }
          printf("%d %d\n",Vds,Ids);

        }
        Vgs++;


}

return 0;
}
