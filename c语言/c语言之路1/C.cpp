#incluede<stdio.h>
#define PI 3.1415926
int main() 
{
     float r, cir,area;
	 printf("ÇëÊäÈëÔ²µÄ°ë¾¶£º");
	 scanf("%f",&r");
	 cir=PI*2*r;
	 area=PI*r*r;
	 printf("cir=%8.4f\n",cir);
	 printf("area=%8.4f\n",area);
	 return 0; 
}
