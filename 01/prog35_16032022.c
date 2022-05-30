// C Programme to determine image and object distance for various mirrors and lens

#include<stdio.h>

int main(){
    
    int a,b,c,d,e,f,g;

    printf("1.If you want to search for Mirror.\n");
    printf("2.If you want to search for Lens.\n\n");
    printf("Enter the option to proceed with: ");
    scanf("%d", &a);

    if(a==1){
        printf("1.If you want to search for Concave.\n");
        printf("2.If you want to search for Convex.\n\n");
        printf("Enter the option to proceed with: ");
        scanf("%d", &b);

        if(b==1){
            printf("1.If the object is at infinity.\n");
            printf("2.If the object is beyond the center of curvature.\n");
            printf("3.If the object is at center of curvature.\n");
            printf("4.If the object is between center of curvature and focus.\n");
            printf("5.If the object is at focus.\n\n");
            printf("Enter the option to proceed with: ");
            scanf("%d", &c);

            if(c==1){
                printf("The image will be at focus, with a size which is highly diminished and with a nature of real and inverted.\n");
            }
            else if(c==2){
                printf("The image will be between focus and center of curvature, with a size which is diminished and with a nature of real and inverted.\n");
            }
            else if(c==3){
                printf("The image will be at center of curvature, with the same size and with a nature of real and inverted.\n");
            }
            else if(c==4){
                printf("The image will be beyond center of curvature, with an enlarged size and with a nature of real and inverted.\n");
            }
            else if(c==5){
                printf("The image will be at infinity, with a size which is highly enlarged and with a nature of real and inverted.\n");
            }
            else{
                printf("Invalid Input.\n");
            }
        }
        else if(b==2){
            printf("1.If the object is at infinity.\n");
            printf("2.If the object is between infinity and pole.\n\n");
            printf("Enter the option to proceed with: ");
            scanf("%d", &d);

            if(d==1){
                printf("The image will be at focus and behind the mirror, with a size which is highly diminished and with a nature of virtual and erect.\n");
            }
            else if(d==2){
                printf("The image will be between pole and focus behind the mirror, with a size which is diminished and with a nature of virtual and erect.\n");
            }
            else {
                printf("Invalid Entry.\n");
            }
        }
        else {
            printf("Invalid Entry.\n");
        }
    }
    else if(a==2){
        printf("1.If you want to search for Concave.\n");
        printf("2.If you want to search for Convex.\n\n");
        printf("Enter the option to proceed with: ");
        scanf("%d", &e);

        if(e==1){
            printf("1.If the object is at infinity.\n");
            printf("2.If the object is in between infinity and zero.\n\n");
            printf("Enter the option to proceed with: ");
            scanf("%d", &f);

            if(f==1){
                printf("The image will be at focus 2, with a size which is highly diminished and with a nature of virtual and erect.\n");
            }
            else if(f==2){
                printf("The image will be between focus 1 and optical center, with a size which is diminished and with a nature of virtual and erect.\n");
            }
            else{
                printf("Invalid Entry. Try Again.\n");
            }
        }
        else if(e==2){
            printf("1.If the object is at infinity.\n");
            printf("2.If the object is beyond twice of focus 1.\n");
            printf("3.If the object is between twice of focus 1 and focus 1.\n");
            printf("4.If the object is at focus 1.\n");
            printf("5.If the object is at twice of focus 1.\n");
            printf("6.If the object is between focus 1 and optical center.\n\n");
            printf("Enter the option to proceed with: ");
            scanf("%d", &g);

            if(g==1){
                printf("The image will be at focus 2, with a size which is diminished and with a nature of real and inverted.\n");
            }
            else if(g==2){
                printf("The image will be between twice of focus 2 and focus 2, with a size which is diminished and with a nature of real and inverted.\n");
            }
            else if(g==3){
                printf("The image will be beyond twice of focus 2, with a size which is enlarged and with a nature of real and inverted.\n");
            }
            else if(g==4){
                printf("The image will be at infinity, with a size which is enlarged and with a nature of real and inverted.\n");
            }
            else if(g==5){
                printf("The image will be at twice of focus 2, with the same size and with a nature of real and inverted.\n");
            }
            else if(g==6){
                printf("The image will be at the same side as the object, with a size which is enlarged and with a nature of virtual and erect.\n");
            }
            else{
                printf("Invalid Entry.\n");
            }
        }
        else{
            printf("Invalid Entry.\n");
        }
    }
    else{
        printf("Invalid Entry.\n");
    }
    return 0;
}