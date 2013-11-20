#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    //variables
    int fcount,ccount,ccount2;
    char lt1;
    //game start
    //start loop level one
    //correct counter,false counter or also wrong counter  
    ccount=0;
    fcount=0;
    ccount2=0;
    do{
    cout<<endl;
    cout<<"please enter a letter "<<endl;
    cout<<endl;
     //input for level one      
    cin>>lt1;
    //first letter of level 1
    if(ccount==0){ 
            if(lt1=='b'){ 
                 cout<<"_ _ _ b";
                 ccount=1;
            }if(lt1=='h'){ 
                 cout<<"h _ _ _";
                 ccount=2;
            }if(lt1=='e'){ 
                 cout<<"_ e _ _";
                 ccount=3;
            }if(lt1=='r'){ 
                 cout<<"_ _ r _";
                 ccount=4;
            }
    }if(ccount==1){ 
            if(lt1=='h'){ 
                 cout<<"h _ _ b";
                 ccount=5;
            }if(lt1=='e'){ 
                 cout<<"_ e _ b";
                 ccount=6;
            }if(lt1=='r'){ 
                 cout<<"_ _ r b";
                 ccount=7;
            }
    }if(ccount==2){ 
            if(lt1=='b'){ 
                 cout<<"h _ _ b";
                 ccount=5;
            }if(lt1=='e'){ 
                 cout<<"h e _ _";
                 ccount=8;
            }if(lt1=='r'){ 
                 cout<<"h _ r _";
                 ccount=9;
            }
    }if(ccount==3){ 
            if(lt1=='b'){ 
                 cout<<"_ e _ b";
                 ccount=6;
            }if(lt1=='h'){ 
                 cout<<"h e _ _";
                 ccount=8;
            }if(lt1=='r'){ 
                 cout<<"_ e r _";
                 ccount=10;
            }
    }if(ccount==4){ 
            if(lt1=='b'){ 
                 cout<<"_ _ r b";
                 ccount=7;
            }if(lt1=='h'){ 
                 cout<<"h _ r _";
                 ccount=9;
            }if(lt1=='e'){ 
                 cout<<"_ e r _";
                 ccount=10;
            }
    }if(ccount==5){ 
            if(lt1=='e'){ 
                 cout<<"h e _ b";
                 ccount=11;
            }if(lt1=='r'){ 
                 cout<<"h _ r b";
                 ccount=12;
            }
    }if(ccount==6){ 
            if(lt1=='h'){ 
                 cout<<"h e _ b";
                 ccount=11;
            }if(lt1=='r'){ 
                 cout<<"_ e r b";
                 ccount=13;
            }
    }if(ccount==7){ 
            if(lt1=='e'){ 
                 cout<<"_ e r b";
                 ccount=13;
            }if(lt1=='h'){ 
                 cout<<"h _ r b";
                 ccount=12;
            }
    }if(ccount==8){ 
            if(lt1=='b'){ 
                 cout<<"h e _ b";
                 ccount=11;
            }if(lt1=='r'){ 
                 cout<<"h e r _";
                 ccount=14;
    }if(ccount==9){ 
            if(lt1=='b'){ 
                 cout<<"h _ r b";
                 ccount=12;
            }if(lt1=='e'){ 
                 cout<<"h e r _";
                 ccount=14;
            }
    }if(ccount==10){ 
            if(lt1=='h'){ 
                 cout<<"h e r _";
                 ccount=14;
            }if(lt1=='b'){ 
                 cout<<"_ e r b";
                 ccount=13;
            }
            //last letter break program
    }if(ccount==11){ 
            if(lt1=='r'){ 
                 cout<<"h e r b";
                 ccount2=1;
            }
    }if(ccount==12){ 
            if(lt1=='e'){ 
                 cout<<"h e r b";
                 ccount2=1;
            }
    }if(ccount==13){ 
            if(lt1=='h'){ 
                 cout<<"h e r b";
                 ccount2=1;
            }
    }if(ccount==14){ 
            if(lt1=='b'){ 
                 cout<<"h e r b";
                 ccount2=1;
            }
            }
          cout<<endl;  
          //serious error since the false appears ramdomly
    if(lt1=='a'||lt1=='c'||lt1=='f'||lt1=='g'||lt1=='h'||lt1=='i'||lt1=='j'||lt1=='k'||lt1=='l'||lt1=='m'||lt1=='n'||lt1=='o'||lt1=='p'||lt1=='q'||lt1=='s'||lt1=='t'||lt1=='u'||lt1=='v'||lt1=='w'||lt1=='x'||lt1=='y'||lt1=='z'){
     for(;fcount<=10;){ 
         fcount=fcount+1;                                                                                           
         if(fcount==1){
         cout<< "_|_"<<endl;                            
         }if(fcount==2){
         cout<< " | "<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==3){
         cout<< " | "<<endl;
         cout<< " | "<<endl;
         cout<< "_|_ "<<endl;              
         }if(fcount==4){
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==5){
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==6){
         cout<< "  ___"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;                                          
         }if(fcount==7){
         cout<< "  ___"<<endl;
         cout<< " |   |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==8){
         cout<< "  ___"<<endl;
         cout<< " |   |"<<endl;
         cout<< " |   O"<<endl;
         cout<< " |"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;                                          
         }if(fcount==15){
         cout<< "  ___"<<endl;
         cout<< " |   |"<<endl;
         cout<< " |   O"<<endl;
         cout<< " |  -|-"<<endl;
         cout<< " |"<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==9){
         cout<< "  ___"<<endl;
         cout<< " |   |"<<endl;
         cout<< " |   O"<<endl;
         cout<< " |  -|-"<<endl;
         cout<< " |  |"<<endl;
         cout<< "_|_"<<endl;              
         }if(fcount==10){
         cout<< "  ___"<<endl;
         cout<< " |   |"<<endl;
         cout<< " |   O"<<endl;
         cout<< " |  -|-"<<endl;
         cout<< " |  | |"<<endl;
         cout<< "_|_"<<endl;
         cout<<"Game over you lose "<<endl;
         }              
         }}
         }
         }while(ccount2==0);
    system("PAUSE");
    return EXIT_SUCCESS;
}
