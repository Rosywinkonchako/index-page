 #include<stdio.h>
    #include<string.h>

    #define MAX_PROPERTIES 100
    typedef struct {

        void view_property();
        /*void search_property(float min_price, max_price);*/

    char address[100];
    float price;
    int bedrooms;

    }
    Property;

    Property properties[MAX_PROPERTIES];  
    int property_count =0;

    void add_property(){
    if(property_count<MAX_PROPERTIES){
    printf("Enter address:");
    scanf("%s",properties[property_count].address);
    printf("Enter price:");
    scanf("%f", &properties[property_count].price);
    printf("Enter number of bedrooms:");
    scanf("%d",&properties[property_count].bedrooms);
    property_count++;

    }
    else{
    printf("Property limit reached.\n");
    }

    }
    int main(){
    int choice;
    do {
        printf("n1. Add Property\n2.View Properties\n3. Search Properties\n4. Exit\n");
        printf("Choose an option:");
        scanf("%d", &choice);

        switch (choice){
    case 1:
        add_property();
        break;
    case 2:
        view_property();
        break;
    case 3:
        float min_price,max_price;

        printf("Enter minimium price:");
         scanf("%f",&min_price);
         printf("Enter maximium price: ");
         scanf("%f", &max_price);

         search_properties(min_price, max_price);

         break;
        }
    case 4:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid option.\n");
    }
   while (choice !=4);
   return 0;
    }
















        }

    }







    }




    }
