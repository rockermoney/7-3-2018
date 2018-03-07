#include <stdio.h>
void main()
{
 char a[100],b[100];
 int i,j,n=0,cout=0;
 scanf("%s",&a);
 for(i=0;a[i]!='\0';i++)
 n++;
 for(j=i-1;j>=0;j--,cout++)
 {
 b[j]=a[cout];
 }
 for(j=0;j<i;j++)
 {
 printf("%c",b[j]);
 }printf("\n");
 for(j=0;j<i;j++)
 if(b[j]!='a'&&b[j]!='e'&&b[j]!='i'&&b[j]!='o'&&b[j]!='u'&&b[j]!='A'&&b[j]!='E'&&b[j]!='I'&&b[j]!='O'&&b[j]!='U')
 {
 printf("%c",b[j]);
    }
}
