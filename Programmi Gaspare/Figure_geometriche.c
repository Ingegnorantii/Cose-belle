#include <stdio.h>

int main()
{	int l; //lato//
 	int c; //caso//
 	int i, j; //indici//
 
    printf("Il quadrato deve avere lato uguale a: ");
    scanf("%d", &l);
 	
 	printf("\nScegli quale figura vuoi stampare:\n");
 
 	printf("Quadrato pieno: 1\n");
 	printf("Quadrato vuoto: 2\n");
 	printf("Triangolo rettangolo con cateto maggiore uguale al lato del quadrato: 3\n");
 	printf("Quadrato diviso in due triangoli rettangoli: 4\n");
 
 	scanf("%d",&c);
 
 	switch (c)
    {  
        case 1:
        { 
            for (i=0; i<l; i++)
        	{ 
        		for (j=0; j<l; j++)
       			 {   
          	      printf("*");
       			 }
            printf("\n");
       		 }
         
         	 break;
        }
        
        case 2:
       	 {
             for(i=0; i<l; i++)
             {
                 for(j=0; j<l; j++)
                 {
                     if((i == 0) || (i == l-1))
                        
                        printf("*");
                     
                     else 
                     {  if((j == 0) || (j == l-1))
                         
                       	    printf("*");
                      	
                      	else
                            printf(" ");
                      
                     } 
                      
                      
                      
                  }  
                        printf("\n");
                     
           	 }

           
        				  break;    
        		               	
                           
   		  }                
      		
        case 3:
      	 {	
               for(i=0; i<l; i++)
               {
                   for(j=0; j<=i; j++)
                   {
                       printf("*");
                   }
                   
                   printf("\n");
                   
               }   
               
               break;
               
           }
            
        	case 4:
        	{  	
            for (i=0; i<l; i++)
            {	
                for(j=0; j<l; j++)
                {    
                	if (j<=i)
                	{
                    	printf("*");
                    }
                
                    else
                    {
               		    printf("+");              	
                    }    
                }
                
                printf("\n");
             }
            
            break;
        }	      				
    
    
    
    
    }
    
    return 0;
}
