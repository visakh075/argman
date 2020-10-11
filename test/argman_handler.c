#include <stdio.h>
#include "../argman.h"
int main(int argc,char * argv[])
{
    arg_map map;
    char op[]="ednrk";
    int exp[]={0,0,1,0,1};
    int conf[]={0,0,1,1,-1};
    int def[]={1,0,0,1,0};
    char * input="";
    char * output="";
    char * key="";
    //printf("\n\n_________________________________________________________________");
    map_init(&map,op,exp,conf,def,1,argc,argv);
//    explore_map(&map);
    //showmap(map);
    wars(map);
    //printf("\nfilename:%s",map.branch[map.n_branch-1].param[0]);
    /*
    if(!error(map))
    {
        for(int i=1;i<argc;i++)
        {printf("%s ",argv[i]);}
        printf("\t-- >");
        //if(safe('e',map)) printf("enc ");
        //if(safe('d',map)) printf("dec ");
        
        if(safe('r',map))
        {
            //printf("rep ");
            //output=NULL;
        }
        if(safe('n',map)) 
        {
            //printf("new ");
            output=branch('n',map)->param[0];
        }
        
        if(safe('k',map))
        {
            //printf("exkey ");
            key=branch('k',map)->param[0];
        }
        
        input=branch('.',map)->param[0];

        printf("i/p :%s ",input);
        printf("o/p :%s ",output);
        printf("k/f :%s ",key);
        printf("\n");
    }*/
    //else{printf("error ");}
}