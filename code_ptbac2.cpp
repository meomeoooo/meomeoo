#include<stdio.h>
#include<math.h>
int main()
{
	//Giai pt bac 2
	int a,b,c;
	float d,x1,x2;
	printf("Vui long nhap a");
	scanf("%d",&a);
	printf("Vui long nhap b");
	scanf("%d",&b);
	printf("Vui long nhap c");
	scanf("%d",&c);
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/2*a;
	x2=-(-b-sqrt(d))/2*a;
if(a==0){
if(b==0){
if(c==0){
	printf("Pt vo so nghiem");
}else{
	printf("Pt vo nghiem");
}
}else
printf("x= %f",(float)-c/b);
}else if(d<0){
	printf("Pt vo nghiem");
}else if (d==0){
printf("phuong trinh co nghiem kep x =%f", (float)-b/2*a);}
	else{
		printf("x1,x2 = %f,%f",x1,x2);
	}	
}
