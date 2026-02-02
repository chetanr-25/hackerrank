/*
You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

Sample Input 0

3 1 4 7 5 4 2 9 5 4
3 5
7 4
1 5
Sample Output 0

3 6 4 2 5 4 2 3 5 4
Sample Input 1

9 8 7 6 5 4 3 2 1 0
0 3
4 1
8 2
Sample Output 1

2 8 7 6 6 4 3 2 3 0
*/

#include <stdio.h>

int main() {
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
    scanf("%d %d %d %d %d %d %d %d %d %d ",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10);
    
    int i1,i2,i3,c1,c2,c3;
    scanf("%d %d",&i1,&c1);
    scanf("%d %d",&i2,&c2);
    scanf("%d %d",&i3,&c3);
    
    if(i1==0){
        d1=d1+c1;
        
        if(d1>=10)d1=d1-10;
    }
    
    else if(i1==1){
        d2=d2+c1;
        
        if(d2>=10)d2=d2-10;
    }
    
    else if(i1==2){
        d3=d3+c1;
        
        if(d3>=10)d3=d3-10;
    }
    
    else if(i1==3){
        d4=d4+c1;
        
        if(d4>=10)d4=d4-10;
    }
    
    else if(i1==4){
        d5=d5+c1;
        
        if(d5>=10)d5=d5-10;
    }
    
    else if(i1==5){
        d6=d6+c1;
        
        if(d6>=10)d6=d6-10;
    }
    
    else if(i1==6){
        d7=d7+c1;
        
        if(d7>=10)d7=d7-10;
    }
    
    else if(i1==7){
        d8=d8+c1;
        
        if(d8>=10)d8=d8-10;
    }
    
    else if(i1==8){
        d9=d9+c1;
        
        if(d9>=10)d9=d9-10;
    }
    
    else if(i1==9){
        d10=d10+c1;
        
        if(d10>=10)d10=d10-10;
    }   
    


    
     if(i2==0){
        d1=d1+c2;
        
        if(d1>=10)d1=d1-10;
    }
    
    else if(i2==1){
        d2=d2+c2;
        
        if(d2>=10)d2=d2-10;
    }
    
    else if(i2==2){
        d3=d3+c2;
        
        if(d3>=10)d3=d3-10;
    }
    
    else if(i2==3){
        d4=d4+c2;
        
        if(d4>=10)d4=d4-10;
    }
    
    else if(i2==4){
        d5=d5+c2;
        
        if(d5>=10)d5=d5-10;
    }
    
    else if(i2==5){
        d6=d6+c2;
        
        if(d6>=10)d6=d6-10;
    }
    
    else if(i2==6){
        d7=d7+c2;
        
        if(d7>=10)d7=d7-10;
    }
    
    else if(i2==7){
        d8=d8+c2;
        
        if(d8>=10)d8=d8-10;
    }
    
    else if(i2==8){
        d9=d9+c2;
        
        if(d9>=10)d9=d9-10;
    }
    
    else if(i2==9){
        d10=d10+c2;
        
        if(d10>=10)d10=d10-10;
    }   
    
    
    
    
     if(i3==0){
        d1=d1+c3;
        
        if(d1>=10)d1=d1-10;
    }
    
    else if(i3==1){
        d2=d2+c3;
        
        if(d2>=10)d2=d2-10;
    }
    
    else if(i3==2){
        d3=d3+c3;
        
        if(d3>=10)d3=d3-10;
    }
    
    else if(i3==3){
        d4=d4+c3;
        
        if(d4>=10)d4=d4-10;
    }
    
    else if(i3==4){
        d5=d5+c3;
        
        if(d5>=10)d5=d5-10;
    }
    
    else if(i3==5){
        d6=d6+c3;
        
        if(d6>=10)d6=d6-10;
    }
    
    else if(i3==6){
        d7=d7+c3;
        
        if(d7>=10)d7=d7-10;
    }
    
    else if(i3==7){
        d8=d8+c3;
        
        if(d8>=10)d8=d8-10;
    }
    
    else if(i3==8){
        d9=d9+c3;
        
        if(d9>=10)d9=d9-10;
    }
    
    else if(i3==9){
        d10=d10+c3;
        
        if(d10>=10)d10=d10-10;
    }   
    
    
    
    
    printf("%d %d %d %d %d %d %d %d %d %d",d1,d2,d3,d4,d5,d6,d7,d8,d9,d10);
    return 0;
}