#include <stdio.h> 
int a[3];   //global variable 
int n = -1; 
void read_a_value() 
{ 
if( n == 2) 
{ 
printf("The array is full\n"); 
return; 
} 
else 
{ 
n++; 
printf("Enter the value for a[%d]",n); 
scanf("%d",&a[n]); 
} 
} 
void disp_array() 
{ 
int i; 
for(i = 0;i <= n;i++) 
{ 
printf("%d\t",a[i]); 
} 
} 
int search(int s) 
{ 
int i; 
    int f = -1; 
    for(i = 0;i <= n;i++) 
    { 
        if(a[i] == s) 
        { 
            f = i; 
            break; 
        } 
    } 
    return f; 
} 
 
int menu() 
{ 
    int ch; 
    printf("Insert - 1\nDisplay - 2\nSearch - 3\nExit - 4\nUr Choice"); 
    scanf("%d",&ch); 
    return ch; 
} 
 
int main() 
{ 
    int ch,s,pos; 
    for(ch = menu(); ch != 4; ch = menu()) 
    { 
        switch(ch) 
        { 
            case 1: 
                read_a_value(); 
                break; 
            case 2: 
                disp_array(); 
                break; 
            case 3: 
                printf("Enter the seraching element"); 
                scanf("%d",&s); 
                pos = search(s); 
                if(pos == -1) 
                { 
                    printf("Not Found...\n"); 
                } 
                else 
                { 
                    printf("The element Present at %d\n",pos); 
                } 
                break; 
            case 4: 
                break; 
            default: 
                printf("Wrong choice...\n"); 
                break; 
        } 
    } 
    return 0; 
}1