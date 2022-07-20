#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<netinet/in.h>

int main(int argc,char **argv){

uint32_t n1,n2,sum;



FILE *pfile1 =fopen(argv[1],"rb");

FILE *pfile2 =fopen(argv[2],"rb");

fread(&n1,4,1,pfile1);
fread(&n2,4,1,pfile2);

n1= ntohl(n1);
n2= ntohl(n2);
sum=n1+n2;

printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",n1,n1,n2,n2,sum,sum);

fclose(pfile1);
fclose(pfile2);

return 0;
}

