//
//  main.c
//  Project
//
//  Created by kim myongjoon on 2016. 6. 24..
//  Copyright © 2016년 itw1994. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE  *frendFile = freopen( "/Users/kimmyongjoon/Desktop/lwt/ltw1994/Project/Project/friend.txt", "r" ,stdin);
    
    if( frendFile != NULL )
    {
        char strTemp[255];
        char *pStr;
        
        while( !feof( frendFile ) )
        {
            pStr = fgets( strTemp, sizeof(strTemp), frendFile );
            printf( "%s", strTemp );
            //printf( "%s", pStr );
        }
        fclose( frendFile );
    }
    else
    {
        //에러 처리
    }
    
    
    
    printf("test\n");
    return 0;
}
