#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item){
stack[++top]=item;
}
int pop (){
return stack[top--];
}
int evaluation(char exp[])
{
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]>='0'&&exp[i]<='9')
			push(exp[i]-'0');
		else{
			int b=pop();
			int a=pop();
			switch(exp[i]){
				case '+':
					push(a+b);
					break;
				case '-':
					push(a-b);
					break;
				case '*':
					push(a*b);
					break;
				case '/':
					push(a/b);
					break;
			}
		}
	}
	return pop();
}
void main(){
	char exp[MAX];
	printf("Enter the valid Postfix Expression:");
scanf("%s",exp);

	int result=evaluation(exp);
	printf("The Result:%d\n",result);

}
