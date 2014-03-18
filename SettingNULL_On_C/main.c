//
//  main.c
//  SettingNULL_On_C
//
//  Created by ammar falmban on 3/18/14.
//  Copyright (c) 2014 SDKaizen.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    double *myPointer;
    
    // the first way to setting NULL
    //myPointer = NULL;
    
    // the Second way to setting NULL
    if (myPointer){}else{}
    
    
     printf("myPointer Value : %f \n",myPointer);
    
    return 0;
}

