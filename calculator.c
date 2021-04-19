#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int res,res2,a,b,ne,n,i,f=1;
	char opr;
	float A,B,a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,
	C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,I1,
	I2,I3,I4,I5,I6,I7,I8,I9,I10,I11,I12,I13,I14,I15,I16,det;
	
	start:
	printf("----  ----  .      ----  .    .   .     ----  ----  ----  ----     ----  .    .    ----  ----  .     .\n");
	printf("|     |  |  |      |     |    |   |     |  |    |   |  |  |_|     |  |  |_|    |_  |  |  |\\   /|\n");
	printf("|     |--|  |      |     |    |   |     |--|    |   |  |  |\\       |--|     |          | |--|  |  \\/ |\n");
	printf("|_  |  |  |_   |_  |_|   |_  |  |    |   ||  | \\      ||     |      ___| |  |  |     |\n");
	printf("\nWhat operation you want to perform.\n");
	printf("\n");
	printf("Addition : 1.                           Subtraction : 2.\n");
	printf("\n");
	printf("Multiplictaion : 3.                     Division : 4.\n");
	printf("\n");
	printf("Square : 5.                             Square root : 6.\n");
	printf("\n");
	printf("Factorial : 7.                          Sin value : 8.\n");
	printf("\n");
	printf("Cos value : 9.                          Tan value : 10.\n");
	printf("\n");
	printf("Natural lograithm : 11.                 Log10 value : 12.\n");
	printf("\n");
	printf("Determinant of a Matrix: 13.            Minors of a Matrix: 14.\n");
	printf("\n");
	printf("Cofactor of a Matrix: 15.               Adjoint of a Matrix: 16.\n");
	printf("\n");
	printf("Inverse of a Matrix: 17.               \n");
	printf("\n");
	printf("Terminate program : 0.\n");
	choice:
	printf("\n");
	printf("Your Choice : ");
	scanf("%d",&res);
	
	switch(res){
		case 0:
			exit(0);
			break;
		case 1:
			printf("\n--------Addition--------\n");
			printf("Enter first number : ");
			scanf("%f",&A);
			printf("Enter second number : ");
			scanf("%f",&B);
			printf("%.2f + %.2f = %.2f.",A
			,B,A+B);
			break;
		case 2:
			printf("\n--------Sutraction--------\n");
			printf("Enter first number : ");
			scanf("%f",&A);
			printf("Enter second number : ");
			scanf("%f",&B);
			printf("%.2f - %.2f = %.2f.",A,B,A-B);
			break;
		case 3:
			printf("\n--------Multiplication--------\n");
			printf("Enter first number : ");
			scanf("%f",&A);
			printf("Enter second number : ");
			scanf("%f",&B);
			printf("%.2f * %.2f = %.2f.",A,B,A*B);
			break;
		case 4:
			printf("\n--------Division--------\n");
			printf("Enter first number : ");
			scanf("%f",&A);
			printf("Enter second number : ");
			scanf("%f",&B);
			printf("%.2f / %.2f = %.2f.",A,B,A/B);
			break;
		case 5:
			printf("\n--------Square--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("Square of %.2f = %.2f",A,A*A);
			break;
		case 6:
			printf("\n--------Square Root--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("Square root of %.2f = %.2f",A,sqrt(A));
			break;
		case 7:
			printf("\n--------Factorial--------\n");
			printf("enter number : ");
			scanf("%d",&n);
			for(i=1; i<=n; i++){
			f=f*i;	}
			printf("%d",f);
			break;
		case 13:
			printf("\n--------Determinant of Matrix--------\n");
			printf("Enter the order of square matrix (e.g. 2*2 || 3*3 || 4*4 ).\n");
			enter:
			printf("Enter Order : ");
			scanf("%d %c %d",&a,&opr,&b);
	
			if((opr != '*') || (a!=b)){
				printf("Invalid order. Enter it again.\n");
				goto enter;
			}else{
				ne=a*b;
			}
	
			switch(ne){
				case 4:
					printf("\n");
					printf("| a1  b1  |\n");
					printf("|         |  = |A| = ?\n");
					printf("| a2  b2  |\n");
					printf("\n");
					printf("Enter 4 elements { a1, b1, a2, b2} : ");
					scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
					det=(a1*b2)-(a2*b1);
					printf("\n");
					printf("| %.1f  %.1f  |\n",a1,b1);
					printf("|              = |A| = %.2f\n",det);
					printf("| %.1f  %.1f  |\n",a2,b2);
					printf("\n");
					break;
				case 9:
					printf("\n");
					printf("| a1  b1  c1  |\n");
					printf("|             |\n");
					printf("| a2  b2  c2  |  = |A| = ? \n");
					printf("|             |\n");
					printf("| a3  b3  c3  |\n");
					printf("\n");
					printf("Enter 9 elements { a1, b1, c1, a2, b2, c2, a3, b3, c3} : ");
					scanf("%f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
					det=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*a3*c2)+(c1*a2*b3)-(c1*a3*b2);
					printf("\n");
					printf("| %.1f  %.1f  %.1f  |\n",a1,b1,c1);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |  = |A| = %.2f\n",a2,b2,c2,det);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |\n",a3,b3,c3);
					printf("\n");
					break;
				case 16:
					printf("\n");
					printf("| a1  b1  c1  d1  |\n");
					printf("|                 |\n");
					printf("| a2  b2  c2  d2  |\n");
					printf("|                 |   = |A| = ? \n");
					printf("| a3  b3  c3  d3  |\n");
					printf("|                 |\n");
					printf("| a4  b4  c4  d4  |\n");
					printf("\n");
					printf("Enter 16 elements { a1,b1,c1,d1.......a4,b4,c4,d4} : ");
					scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
					m1=(b2*c3*d4)-(b2*c4*d3)-(c2*b3*d4)+(c2*b4*d3)+(d2*b3*c4)-(d2*b4*c3);
					m2=(b1*c3*d4)-(b1*c4*d3)-(c1*b3*d4)+(c1*b4*d3)+(d1*b3*c4)-(d1*b4*c3);
					m3=(b1*c2*d4)-(b1*c4*d2)-(c1*b2*d4)+(c1*b4*d2)+(d1*b2*c4)-(d1*b4*c2);
					m4=(b1*c2*d3)-(b1*c3*d2)-(c1*b2*d3)+(c1*b3*d2)+(d1*b2*c3)-(d1*b3*c2);
					det=(a1*m1)+(-a2*m2)+(a3*m3)+(-a4*m4);
					printf("\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",a1,b1,c1,d1);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",a2,b2,c2,d2);
					printf("|                            = |A| = %.2f\n",det);
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",a3,b3,c3,d3);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",a4,b4,c4,d4);
					printf("\n");
					break;
				default :
					printf("Too much large matrix.\n");
					goto enter;
			
	}
		break;
		case 8:
			printf("\n--------Sin value--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("Sin(%.1f) = %.2f",A,sin(A));
			break;
		case 9:
			printf("\n--------Cos value--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("Cos(%.1f) = %.2f",A,cos(A));
			break;
		case 10:
			printf("\n--------Tan value--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("Tan(%.1f) = %.2f",A,tan(A));
			break;
		case 11:
			printf("\n--------Natural logrithm (ln)--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("ln(%.1f) = %.2f",A,log(A));
			break;
		case 12:
			printf("\n--------log10 value--------\n");
			printf("Enter number : ");
			scanf("%f",&A);
			printf("log10(%.1f) = %.2f",A,log10(A));
			break;
		case 14:
			printf("\n--------Minor of Matrix--------\n");
			printf("Enter the order of square matrix (e.g. 2*2 || 3*3 || 4*4 ).\n");
			enter2:
			printf("Enter Order : ");
			scanf("%d %c %d",&a,&opr,&b);
	
			if((opr != '*') || (a!=b)){
				printf("Invalid order. Enter it again.\n");
				goto enter2;
			}else{
				ne=a*b;
			}
	
			switch(ne){
				case 4:
					printf("\n");
					printf("| a1  b1  |\n");
					printf("|         |  = Minor(A) = ?\n");
					printf("| a2  b2  |\n");
					printf("\n");
					printf("Enter 4 elements { a1, b1, a2, b2} : ");
					scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
					m1=b2;
					m2=a2;
					m3=b1;
					m4=a1;
					printf("\n");
					printf("| %.1f  %.1f  |\n",m1,m2);
					printf("|               = Minor(A)\n");
					printf("| %.1f  %.1f  |\n",m3,m4);
					printf("\n");
					break;
				case 9:
					printf("\n");
					printf("| a1  b1  c1  |\n");
					printf("|             |\n");
					printf("| a2  b2  c2  |  = Minor(A) = ? \n");
					printf("|             |\n");
					printf("| a3  b3  c3  |\n");
					printf("\n");
					printf("Enter 9 elements { a1, b1, c1, a2, b2, c2, a3, b3, c3} : ");
					scanf("%f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
					m1=(b2*c3)-(b3*c2);
					m2=(a2*c3)-(a3*c2);
					m3=(a2*b3)-(a3*b2);
					m4=(b1*c3)-(b3*c1);
					m5=(a1*c3)-(a3*c1);
					m6=(a1*b3)-(a3*b1);
					m7=(b1*c2)-(b2*c1);
					m8=(a1*c2)-(a2*c1);
					m9=(a1*b2)-(a2*b1);
					printf("\n");
					printf("| %.1f  %.1f  %.1f  |\n",m1,m2,m3);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |  = Minor(A)\n",m4,m5,m6);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |\n",m7,m8,m9);
					printf("\n");
					break;
				case 16:
					printf("\n");
					printf("| a1  b1  c1  d1  |\n");
					printf("|                 |\n");
					printf("| a2  b2  c2  d2  |\n");
					printf("|                 |   = Minor(A) = ? \n");
					printf("| a3  b3  c3  d3  |\n");
					printf("|                 |\n");
					printf("| a4  b4  c4  d4  |\n");
					printf("\n");
					printf("Enter 16 elements { a1,b1,c1,d1.......a4,b4,c4,d4} : ");
					scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
					m1=(b4*c2*d3)-(d4*c2*b3)+(b3*c4*d2)-(d3*c4*b2)+(b2*c3*d4)-(d2*c3*b4);
					m2=(a4*c2*d3)-(d4*c2*a3)+(a3*c4*d2)-(d3*c4*a2)+(a2*c3*d4)-(d2*c3*a4);
					m3=(a4*b2*d3)-(d4*b2*a3)+(a3*b4*d2)-(d3*b4*a2)+(a2*b3*d4)-(d2*b3*a4);
					m4=(a4*b2*c3)-(c4*b2*a3)+(a3*b4*c2)-(c3*b4*a2)+(a2*b3*c4)-(c2*b3*a4);
					m5=(b1*c3*d4)-(b1*d3*c4)-(c1*b3*d4)+(c1*d3*b4)+(d1*b3*c4)-(d1*c3*b4);
					m6=(a1*c3*d4)-(a1*d3*c4)-(c1*a3*d4)+(c1*d3*a4)+(d1*a3*c4)-(d1*c3*a4);
					m7=(a1*b3*d4)-(a1*d3*b4)-(b1*a3*d4)+(b1*d3*a4)+(d1*a3*b4)-(d1*b3*a4);
					m8=(a1*b3*c4)-(a1*c3*b4)-(b1*a3*c4)+(b1*c3*a4)+(c1*a3*b4)-(c1*b3*a4);
					m9=(b1*c2*d4)-(b1*d2*c4)-(c1*b2*d4)+(c1*d2*b4)+(d1*b2*c4)-(d1*c2*b4);
					m10=(a1*c2*d4)-(a1*d2*c4)-(c1*a2*d4)+(c1*d2*a4)+(d1*a2*c4)-(d1*c2*a4);
					m11=(a1*b2*d4)-(a1*d2*b4)-(b1*a2*d4)+(b1*d2*a4)+(d1*a2*b4)-(d1*b2*a4);
					m12=(a1*b2*c4)-(a1*c2*b4)-(b1*a2*c4)+(b1*c2*a4)+(c1*a2*b4)-(c1*b2*a4);
					m13=(b1*c2*d3)-(b1*d2*c3)-(c1*b2*d3)+(c1*d2*b3)+(d1*b2*c3)-(d1*c2*b3);
					m14=(a1*c2*d3)-(a1*d2*c3)-(c1*a2*d3)+(c1*d2*a3)+(d1*a2*c3)-(d1*c2*a3);
					m15=(a1*b2*d3)-(a1*d2*b3)-(b1*a2*d3)+(b1*d2*a3)+(d1*a2*b3)-(d1*b2*a3);
					m16=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*c2*a3)+(c1*a2*b3)-(c1*b2*a3);
					det=(a1*m1)+(-a2*m2)+(a3*m3)+(-a4*m4);
					printf("\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",m1,m2,m3,m4);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",m5,m6,m7,m8);
					printf("|                             = Minor(A)\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",m9,m10,m11,m12);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",m13,m14,m15,m16);
					printf("\n");
					break;
				default :
					printf("Too much large matrix.\n");
					goto enter2;
			
	}
		break;
		case 15:
			printf("\n--------Cofactor of Matrix--------\n");
			printf("Enter the order of square matrix (e.g. 2*2 || 3*3 || 4*4 ).\n");
			enter3:
			printf("Enter Order : ");
			scanf("%d %c %d",&a,&opr,&b);
	
			if((opr != '*') || (a!=b)){
				printf("Invalid order. Enter it again.\n");
				goto enter;
			}else{
				ne=a*b;
			}
	
			switch(ne){
				case 4:
					printf("\n");
					printf("| a1  b1  |\n");
					printf("|         |  = Cofactor(A) = ?\n");
					printf("| a2  b2  |\n");
					printf("\n");
					printf("Enter 4 elements { a1, b1, a2, b2} : ");
					scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
					m1=b2;
					m2=a2;
					m3=b1;
					m4=a1;
					C1=m1;
					C2=-m2;
					C3=-m3;
					C4=m4;
					printf("\n");
					printf("| %.1f  %.1f  |\n",C1,C2);
					printf("|              = Cofactor(A)\n");
					printf("| %.1f  %.1f  |\n",C3,C4);
					printf("\n");
					break;
				case 9:
					printf("\n");
					printf("| a1  b1  c1  |\n");
					printf("|             |\n");
					printf("| a2  b2  c2  |  = Cofactor(A) = ? \n");
					printf("|             |\n");
					printf("| a3  b3  c3  |\n");
					printf("\n");
					printf("Enter 9 elements { a1, b1, c1, a2, b2, c2, a3, b3, c3} : ");
					scanf("%f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
					m1=(b2*c3)-(b3*c2);
					m2=(a2*c3)-(a3*c2);
					m3=(a2*b3)-(a3*b2);
					m4=(b1*c3)-(b3*c1);
					m5=(a1*c3)-(a3*c1);
					m6=(a1*b3)-(a3*b1);
					m7=(b1*c2)-(b2*c1);
					m8=(a1*c2)-(a2*c1);
					m9=(a1*b2)-(a2*b1);
					C1=m1;
					C2=-m2;
					C3=m3;
					C4=-m4;
					C5=m5;
					C6=-m6;
					C7=m7;
					C8=-m8;
					C9=m9;
					printf("\n");
					printf("| %.1f  %.1f  %.1f  |\n",C1,C2,C3);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |  = Cofactor(A)\n",C4,C5,C6);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |\n",C7,C8,C9);
					printf("\n");
					break;
				case 16:
					printf("\n");
					printf("| a1  b1  c1  d1  |\n");
					printf("|                 |\n");
					printf("| a2  b2  c2  d2  |\n");
					printf("|                 |   = Cofactor(A) = ? \n");
					printf("| a3  b3  c3  d3  |\n");
					printf("|                 |\n");
					printf("| a4  b4  c4  d4  |\n");
					printf("\n");
					printf("Enter 16 elements { a1,b1,c1,d1.......a4,b4,c4,d4} : ");
					scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
					m1=(b4*c2*d3)-(d4*c2*b3)+(b3*c4*d2)-(d3*c4*b2)+(b2*c3*d4)-(d2*c3*b4);
					m2=(a4*c2*d3)-(d4*c2*a3)+(a3*c4*d2)-(d3*c4*a2)+(a2*c3*d4)-(d2*c3*a4);
					m3=(a4*b2*d3)-(d4*b2*a3)+(a3*b4*d2)-(d3*b4*a2)+(a2*b3*d4)-(d2*b3*a4);
					m4=(a4*b2*c3)-(c4*b2*a3)+(a3*b4*c2)-(c3*b4*a2)+(a2*b3*c4)-(c2*b3*a4);
					m5=(b1*c3*d4)-(b1*d3*c4)-(c1*b3*d4)+(c1*d3*b4)+(d1*b3*c4)-(d1*c3*b4);
					m6=(a1*c3*d4)-(a1*d3*c4)-(c1*a3*d4)+(c1*d3*a4)+(d1*a3*c4)-(d1*c3*a4);
					m7=(a1*b3*d4)-(a1*d3*b4)-(b1*a3*d4)+(b1*d3*a4)+(d1*a3*b4)-(d1*b3*a4);
					m8=(a1*b3*c4)-(a1*c3*b4)-(b1*a3*c4)+(b1*c3*a4)+(c1*a3*b4)-(c1*b3*a4);
					m9=(b1*c2*d4)-(b1*d2*c4)-(c1*b2*d4)+(c1*d2*b4)+(d1*b2*c4)-(d1*c2*b4);
					m10=(a1*c2*d4)-(a1*d2*c4)-(c1*a2*d4)+(c1*d2*a4)+(d1*a2*c4)-(d1*c2*a4);
					m11=(a1*b2*d4)-(a1*d2*b4)-(b1*a2*d4)+(b1*d2*a4)+(d1*a2*b4)-(d1*b2*a4);
					m12=(a1*b2*c4)-(a1*c2*b4)-(b1*a2*c4)+(b1*c2*a4)+(c1*a2*b4)-(c1*b2*a4);
					m13=(b1*c2*d3)-(b1*d2*c3)-(c1*b2*d3)+(c1*d2*b3)+(d1*b2*c3)-(d1*c2*b3);
					m14=(a1*c2*d3)-(a1*d2*c3)-(c1*a2*d3)+(c1*d2*a3)+(d1*a2*c3)-(d1*c2*a3);
					m15=(a1*b2*d3)-(a1*d2*b3)-(b1*a2*d3)+(b1*d2*a3)+(d1*a2*b3)-(d1*b2*a3);
					m16=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*c2*a3)+(c1*a2*b3)-(c1*b2*a3);
					C1=m1;
					C2=-m2;
					C3=m3;
					C4=-m4;
					C5=-m5;
					C6=m6;
					C7=-m7;
					C8=m8;
					C9=m9;
					C10=-m10;
					C11=m11;
					C12=-m12;
					C13=-m13;
					C14=m14;
					C15=-m15;
					C16=m16;
					printf("\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",C1,C2,C3,C4);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",C5,C6,C7,C8);
					printf("|                                = Cofactor(A)\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",C9,C10,C11,C12);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",C13,C14,C15,C16);
					printf("\n");
					break;
				default :
					printf("Too much large matrix.\n");
					goto enter3;
			
	}
		break;
		case 16:
			printf("\n--------Adjoint of Matrix--------\n");
			printf("Enter the order of square matrix (e.g. 2*2 || 3*3 || 4*4 ).\n");
			enter4:
			printf("Enter Order : ");
			scanf("%d %c %d",&a,&opr,&b);
	
			if((opr != '*') || (a!=b)){
				printf("Invalid order. Enter it again.\n");
				goto enter4;
			}else{
				ne=a*b;
			}
	
			switch(ne){
				case 4:
					printf("\n");
					printf("| a1  b1  |\n");
					printf("|         |  = Adjoint(A) = ?\n");
					printf("| a2  b2  |\n");
					printf("\n");
					printf("Enter 4 elements { a1, b1, a2, b2} : ");
					scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
					m1=b2;
					m2=a2;
					m3=b1;
					m4=a1;
					C1=m1;
					C2=-m2;
					C3=-m3;
					C4=m4;
					A1=C1;
					A2=C3;
					A3=C2;
					A4=C4;
					printf("\n");
					printf("| %.1f  %.1f  |\n",A1,A2);
					printf("|               = Adjoint(A)\n");
					printf("| %.1f  %.1f  |\n",A3,A4);
					printf("\n");
					break;
				case 9:
					printf("\n");
					printf("| a1  b1  c1  |\n");
					printf("|             |\n");
					printf("| a2  b2  c2  |  = Adjoint(A) = ? \n");
					printf("|             |\n");
					printf("| a3  b3  c3  |\n");
					printf("\n");
					printf("Enter 9 elements { a1, b1, c1, a2, b2, c2, a3, b3, c3} : ");
					scanf("%f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
					m1=(b2*c3)-(b3*c2);
					m2=(a2*c3)-(a3*c2);
					m3=(a2*b3)-(a3*b2);
					m4=(b1*c3)-(b3*c1);
					m5=(a1*c3)-(a3*c1);
					m6=(a1*b3)-(a3*b1);
					m7=(b1*c2)-(b2*c1);
					m8=(a1*c2)-(a2*c1);
					m9=(a1*b2)-(a2*b1);
					C1=m1;
					C2=-m2;
					C3=m3;
					C4=-m4;
					C5=m5;
					C6=-m6;
					C7=m7;
					C8=-m8;
					C9=m9;
					A1=C1;
					A2=C4;
					A3=C7;
					A4=C2;
					A5=C5;
					A6=C8;
					A7=C3;
					A8=C6;
					A9=C9;
					printf("\n");
					printf("| %.1f  %.1f  %.1f  |\n",A1,A2,A3);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |  = Adjoint(A)\n",A4,A5,A6);
					printf("|                    \n");
					printf("| %.1f  %.1f  %.1f  |\n",A7,A8,A9);
					printf("\n");
					break;
				case 16:
					printf("\n");
					printf("| a1  b1  c1  d1  |\n");
					printf("|                 |\n");
					printf("| a2  b2  c2  d2  |\n");
					printf("|                 |   = Adjoint(A) = ? \n");
					printf("| a3  b3  c3  d3  |\n");
					printf("|                 |\n");
					printf("| a4  b4  c4  d4  |\n");
					printf("\n");
					printf("Enter 16 elements { a1,b1,c1,d1.......a4,b4,c4,d4} : ");
					scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
					m1=(b4*c2*d3)-(d4*c2*b3)+(b3*c4*d2)-(d3*c4*b2)+(b2*c3*d4)-(d2*c3*b4);
					m2=(a4*c2*d3)-(d4*c2*a3)+(a3*c4*d2)-(d3*c4*a2)+(a2*c3*d4)-(d2*c3*a4);
					m3=(a4*b2*d3)-(d4*b2*a3)+(a3*b4*d2)-(d3*b4*a2)+(a2*b3*d4)-(d2*b3*a4);
					m4=(a4*b2*c3)-(c4*b2*a3)+(a3*b4*c2)-(c3*b4*a2)+(a2*b3*c4)-(c2*b3*a4);
					m5=(b1*c3*d4)-(b1*d3*c4)-(c1*b3*d4)+(c1*d3*b4)+(d1*b3*c4)-(d1*c3*b4);
					m6=(a1*c3*d4)-(a1*d3*c4)-(c1*a3*d4)+(c1*d3*a4)+(d1*a3*c4)-(d1*c3*a4);
					m7=(a1*b3*d4)-(a1*d3*b4)-(b1*a3*d4)+(b1*d3*a4)+(d1*a3*b4)-(d1*b3*a4);
					m8=(a1*b3*c4)-(a1*c3*b4)-(b1*a3*c4)+(b1*c3*a4)+(c1*a3*b4)-(c1*b3*a4);
					m9=(b1*c2*d4)-(b1*d2*c4)-(c1*b2*d4)+(c1*d2*b4)+(d1*b2*c4)-(d1*c2*b4);
					m10=(a1*c2*d4)-(a1*d2*c4)-(c1*a2*d4)+(c1*d2*a4)+(d1*a2*c4)-(d1*c2*a4);
					m11=(a1*b2*d4)-(a1*d2*b4)-(b1*a2*d4)+(b1*d2*a4)+(d1*a2*b4)-(d1*b2*a4);
					m12=(a1*b2*c4)-(a1*c2*b4)-(b1*a2*c4)+(b1*c2*a4)+(c1*a2*b4)-(c1*b2*a4);
					m13=(b1*c2*d3)-(b1*d2*c3)-(c1*b2*d3)+(c1*d2*b3)+(d1*b2*c3)-(d1*c2*b3);
					m14=(a1*c2*d3)-(a1*d2*c3)-(c1*a2*d3)+(c1*d2*a3)+(d1*a2*c3)-(d1*c2*a3);
					m15=(a1*b2*d3)-(a1*d2*b3)-(b1*a2*d3)+(b1*d2*a3)+(d1*a2*b3)-(d1*b2*a3);
					m16=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*c2*a3)+(c1*a2*b3)-(c1*b2*a3);
					C1=m1;
					C2=-m2;
					C3=m3;
					C4=-m4;
					C5=-m5;
					C6=m6;
					C7=-m7;
					C8=m8;
					C9=m9;
					C10=-m10;
					C11=m11;
					C12=-m12;
					C13=-m13;
					C14=m14;
					C15=-m15;
					C16=m16;
					A1=C1;
					A2=C5;
					A3=C9;
					A4=C13;
					A5=C2;
					A6=C6;
					A7=C10;
					A8=C14;
					A9=C3;
					A10=C7;
					A11=C11;
					A12=C15;
					A13=C4;
					A14=C8;
					A15=C12;
					A16=C16;
					printf("\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",A1,A2,A3,A4);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",A5,A6,A7,A8);
					printf("|                               = Adjoint(A)\n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",A9,A10,A11,A12);
					printf("|                          \n");
					printf("| %.1f  %.1f  %.1f  %.1f  |\n",A13,A14,A15,A16);
					printf("\n");
					break;
				default :
					printf("Too much large matrix.\n");
					goto enter4;
			
	}
		break;
		case 17:
			printf("\n--------Inverse of Matrix--------\n");
			printf("Enter the order of square matrix (e.g. 2*2 || 3*3 || 4*4 ).\n");
			enter5:
			printf("Enter Order : ");
			scanf("%d %c %d",&a,&opr,&b);
	
			if((opr != '*') || (a!=b)){
				printf("Invalid order. Enter it again.\n");
				goto enter5;
			}else{
				ne=a*b;
			}
	
			switch(ne){
				case 4:
					printf("\n");
					printf("| a1  b1  |\n");
					printf("|         |  = Inverse(A) = ?\n");
					printf("| a2  b2  |\n");
					printf("\n");
					printf("Enter 4 elements { a1, b1, a2, b2} : ");
					scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
					det=(a1*b2)-(a2*b1);
					if(det==0){
						printf(" |A| = 0. Hence Inverse not exist.\n");
					}else{
						m1=b2;
						m2=a2;
						m3=b1;
						m4=a1;
						C1=m1;
						C2=-m2;
						C3=-m3;
						C4=m4;
						A1=C1;
						A2=C3;
						A3=C2;
						A4=C4;
						I1=A1/det;
						I2=A2/det;
						I3=A3/det;
						I4=A4/det;
						printf("\n");
						printf("| %.1f  %.1f  |\n",I1,I2);
						printf("|                = Inverse(A)\n");
						printf("| %.1f  %.1f  |\n",I3,I4);
						printf("\n");
						printf("| %.1f/%.1f  %.1f/%.1f  |\n",A1,det,A2,det);
						printf("|                           = Inverse(A)\n");
						printf("| %.1f/%.1f  %.1f/%.1f  |\n",A3,det,A4,det);
						printf("\n");
					}
					break;
				case 9:
					printf("\n");
					printf("| a1  b1  c1  |\n");
					printf("|             |\n");
					printf("| a2  b2  c2  |  = Inverse(A) = ? \n");
					printf("|             |\n");
					printf("| a3  b3  c3  |\n");
					printf("\n");
					printf("Enter 9 elements { a1, b1, c1, a2, b2, c2, a3, b3, c3} : ");
					scanf("%f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
					det=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*a3*c2)+(c1*a2*b3)-(c1*a3*b2);
					if(det==0){
						printf(" |A| = 0. Hence Inverse not exist.\n");
					}else{
						m1=(b2*c3)-(b3*c2);
						m2=(a2*c3)-(a3*c2);
						m3=(a2*b3)-(a3*b2);
						m4=(b1*c3)-(b3*c1);
						m5=(a1*c3)-(a3*c1);
						m6=(a1*b3)-(a3*b1);
						m7=(b1*c2)-(b2*c1);
						m8=(a1*c2)-(a2*c1);
						m9=(a1*b2)-(a2*b1);
						C1=m1;
						C2=-m2;
						C3=m3;
						C4=-m4;
						C5=m5;
						C6=-m6;
						C7=m7;
						C8=-m8;
						C9=m9;
						A1=C1;
						A2=C4;
						A3=C7;
						A4=C2;
						A5=C5;
						A6=C8;
						A7=C3;
						A8=C6;
						A9=C9;
						I1=A1/det;
						I2=A2/det;
						I3=A3/det;
						I4=A4/det;
						I5=A5/det;
						I6=A6/det;
						I7=A7/det;
						I8=A8/det;
						I9=A9/det;
						printf("\n");
						printf("| %.1f  %.1f  %.1f  |\n",I1,I2,I3);
						printf("|                  \n");
						printf("| %.1f  %.1f  %.1f  |  = Inverse(A)\n",I4,I5,I6);
						printf("|                  \n");
						printf("| %.1f  %.1f  %.1f  |\n",I7,I8,I9);
						printf("\n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A1,det,A2,det,A3,det);
						printf("|                     \n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |  = Inverse(A)\n",A4,det,A5,det,A6,det);
						printf("|                     \n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A7,det,A8,det,A9,det);
						printf("\n");
					}
					break;
				case 16:
					printf("\n");
					printf("| a1  b1  c1  d1  |\n");
					printf("|                 |  \n");
					printf("| a2  b2  c2  d2  |\n");
					printf("|                 |     = Inverse(A) = ? \n");
					printf("| a3  b3  c3  d3  |\n");
					printf("|                 |   \n");
					printf("| a4  b4  c4  d4  |\n");
					printf("\n");
					printf("Enter 16 elements { a1,b1,c1,d1.......a4,b4,c4,d4} : ");
					scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
					m1=(b4*c2*d3)-(d4*c2*b3)+(b3*c4*d2)-(d3*c4*b2)+(b2*c3*d4)-(d2*c3*b4);
					m2=(a4*c2*d3)-(d4*c2*a3)+(a3*c4*d2)-(d3*c4*a2)+(a2*c3*d4)-(d2*c3*a4);
					m3=(a4*b2*d3)-(d4*b2*a3)+(a3*b4*d2)-(d3*b4*a2)+(a2*b3*d4)-(d2*b3*a4);
					m4=(a4*b2*c3)-(c4*b2*a3)+(a3*b4*c2)-(c3*b4*a2)+(a2*b3*c4)-(c2*b3*a4);
					m5=(b1*c3*d4)-(b1*d3*c4)-(c1*b3*d4)+(c1*d3*b4)+(d1*b3*c4)-(d1*c3*b4);
					m6=(a1*c3*d4)-(a1*d3*c4)-(c1*a3*d4)+(c1*d3*a4)+(d1*a3*c4)-(d1*c3*a4);
					m7=(a1*b3*d4)-(a1*d3*b4)-(b1*a3*d4)+(b1*d3*a4)+(d1*a3*b4)-(d1*b3*a4);
					m8=(a1*b3*c4)-(a1*c3*b4)-(b1*a3*c4)+(b1*c3*a4)+(c1*a3*b4)-(c1*b3*a4);
					m9=(b1*c2*d4)-(b1*d2*c4)-(c1*b2*d4)+(c1*d2*b4)+(d1*b2*c4)-(d1*c2*b4);
					m10=(a1*c2*d4)-(a1*d2*c4)-(c1*a2*d4)+(c1*d2*a4)+(d1*a2*c4)-(d1*c2*a4);
					m11=(a1*b2*d4)-(a1*d2*b4)-(b1*a2*d4)+(b1*d2*a4)+(d1*a2*b4)-(d1*b2*a4);
					m12=(a1*b2*c4)-(a1*c2*b4)-(b1*a2*c4)+(b1*c2*a4)+(c1*a2*b4)-(c1*b2*a4);
					m13=(b1*c2*d3)-(b1*d2*c3)-(c1*b2*d3)+(c1*d2*b3)+(d1*b2*c3)-(d1*c2*b3);
					m14=(a1*c2*d3)-(a1*d2*c3)-(c1*a2*d3)+(c1*d2*a3)+(d1*a2*c3)-(d1*c2*a3);
					m15=(a1*b2*d3)-(a1*d2*b3)-(b1*a2*d3)+(b1*d2*a3)+(d1*a2*b3)-(d1*b2*a3);
					m16=(a1*b2*c3)-(a1*c2*b3)-(b1*a2*c3)+(b1*c2*a3)+(c1*a2*b3)-(c1*b2*a3);
					det=(a1*m1)+(-a2*m5)+(a3*m9)+(-a4*m13);
					if(det==0){
						printf(" |A| = 0. Hence Inverse not exist.\n");
					}else{
						C1=m1;
						C2=-m2;
						C3=m3;
						C4=-m4;
						C5=-m5;
						C6=m6;
						C7=-m7;
						C8=m8;
						C9=m9;
						C10=-m10;
						C11=m11;
						C12=-m12;
						C13=-m13;
						C14=m14;
						C15=-m15;
						C16=m16;
						A1=C1;
						A2=C5;
						A3=C9;
						A4=C13;
						A5=C2;
						A6=C6;
						A7=C10;
						A8=C14;
						A9=C3;
						A10=C7;
						A11=C11;
						A12=C15;
						A13=C4;
						A14=C8;
						A15=C12;
						A16=C16;
						I1=A1/det;
						I2=A2/det;
						I3=A3/det;
						I4=A4/det;
						I5=A5/det;
						I6=A6/det;
						I7=A7/det;
						I8=A8/det;
						I9=A9/det;
						I10=A10/det;
						I11=A11/det;
						I12=A12/det;
						I13=A13/det;
						I14=A14/det;
						I15=A15/det;
						I16=A16/det;
						printf("\n");
						printf("| %.1f  %.1f  %.1f  %.1f  |\n",I1,I2,I3,I4);
						printf("|                          \n");
						printf("| %.1f  %.1f  %.1f  %.1f  |\n",I5,I6,I7,I8);
						printf("|                             = Inverse(A)\n");
						printf("| %.1f  %.1f  %.1f  %.1f  |\n",I9,I10,I11,I12);
						printf("|                          \n");
						printf("| %.1f  %.1f  %.1f  %.1f  |\n",I13,I14,I15,I16);
						printf("\n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A1,det,A2,det,A3,det,A4,det);
						printf("|                          \n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A5,det,A6,det,A7,det,A8,det);
						printf("|                                                       = Inverse(A)\n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A9,det,A10,det,A11,det,A12,det);
						printf("|                          \n");
						printf("| %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  %.1f/%.1f  |\n",A13,det,A14,det,A15,det,A16,det);
						printf("\n");
					}
					break;
				default :
					printf("Too much large matrix.\n");
					goto enter5;
			
	}
		break;
		default :
			printf("Invalid option selected. Select again.\n");
			goto choice;	
	}
	repeat:
	printf("\n\nWanna repeat operation ? (1/0) : ");
	scanf("%d",&res2);
	switch (res2){
		case 0:
			exit(0);
		case 1:
			goto start;
		default :
			printf("Invalid response. Enter again.");
			goto repeat;
	}
	
	getch();
	return 0;
}
