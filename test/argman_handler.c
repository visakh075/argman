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
    int method;
    map_init(&map,op,exp,conf,def,1,argc,argv);

    if(!error(map)){
    if(safe('e',map))
    {method=0;}
    if(safe('d',map))
    {method=1;}
    input=branch('.',map)->param[0];
    if(safe('n',map))
    {output=branch('n',map)->param[0];}
    if(safe('r',map))
    {output=branch('.',map)->param[0];}
    if(safe('k',map))
    {key=branch('k',map)->param[0];}
    for(int i=1;i<argc;i++)printf("%s ",argv[i]);
    }
}