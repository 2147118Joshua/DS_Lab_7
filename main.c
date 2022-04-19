#include<stdio.h>
struct hashing
{
    int part;
    int quantity;
};
int main(){
    int i,parts,quan,key,n, ser, index, col=0;
    struct hashing st[20];
    
    for(i=0;i<20;i++)
    {
        st[i].part=0;
        st[i].quantity=0;
    }
    
    printf("enter the n value");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the part>> ");
        scanf("%d",&parts);
        printf("Enter the quantity>> ");
        scanf("%d",&quan);
        
        key = parts%10;
        
        while(st[key].part>0 && key<=10){
            key++;
            col++;
        }
        st[key].part=parts;
        st[key].quantity=quan;
    }
    printf("************************************\n");
    for(i=0;i<=10;i++){
        printf("--------------------------------------\n");
        printf("part>>%d\n",st[i].part);
        printf("quantity>>%d\n",st[i].quantity);
        printf("--------------------------------------\n");
    }
    printf("************************************\n");
    printf("Enter the element to search>>");
    scanf("%d",&ser);
    index=ser%10;
    while(st[index].part!= ser && index<=10){
            index++;
    }
    if(st[index].part==ser){
        printf("%d element found\n",st[index].part);
    }
    else{
        printf("element not found\n");
    }
    printf("number of colision>>%d\n\n",col);
}
