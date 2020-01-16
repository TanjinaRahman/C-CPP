#include<stdio.h>


int main(){

int i,j, Vt=1, c, Vgs=2, Ids, Vds;

printf("Press 1 for nMOS and press any key for pMOS\n");
scanf("%d",&i);
if (i==1){
        c=30;
}
else{
    c=15;
}
FILE * fp = fopen ("Output.csv" , " w+ ");
fprintf (fp, "%s","Vds,Ids\n");
for(j=0;j<4;j++){

        for( Vds=0;Vds<6;Vds++){

            if(Vds<(Vgs-Vt)){
                Ids=c*(((Vgs-Vt)*Vds)-(pow(Vds,2)/2));
            }

            else
            {
                Ids=c*pow((Vgs-Vt),2)/2;
                //printf("??");

            }

          //printf("%d %d\n",Vds,Ids);
          fprintf (fp, "%d,%d\n",Vds,Ids);

        }

        Vgs++;


}

return 0;
}
