/*int path=0, i, j, k;
for(k=0; k<n; k++){
for(i=0; i<n; i++){
for(j=0; j<n; j++){
path+=m[i][k]*m[k][j];
}
}
}*/
#include<stdio.h>
int main(void)
{
    int n;
    int m[26][26],i,j,ed=0,nd=0,ad=0,aed=0;
   int ch,ch1;
   int path=0,  k;
    printf("enter:how many vertics: \n");
    scanf("%d",&n);
    printf("now enter your edges: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0,ch=97;i<n;i++,ch++)
    {
        for(j=0,ch1=97;j<n;j++,ch1++)
        {
            if(m[i][j]!=0)
            {
               ed=ed+m[i][j];
               if(m[i][j]>1)
               {
                 ad=m[i][j]-1;
                  aed=aed+ad;
               }
                printf("%c is connected with %c in %d ways\n",ch,ch1,m[i][j]);


            }
            else
            {
              nd++;
            }
        }
    }
    for(k=0; k<n; k++){
for(i=0; i<n; i++){
for(j=0; j<n; j++){
path+=m[i][k]*m[k][j];
}
}
}

    printf("Number of Total edges is %d\n",ed);
    printf("number of total alternet edges is %d\n",aed);
     printf("minimum %d edge are missing\n",nd);
}


