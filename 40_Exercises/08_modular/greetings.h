#ifndef _GREETINGS_H_
#define _GREETINGS_H_

// Im header alles definieren was ausserhalb des .c files sichtbar sein muss



// globale Variable durch extern
extern int greetingsCounter; //exponiert die Variable aus .c global-> in main abrufbar, sagt nur dass es irgendwo die Variable gibt

//declarations
void SayHello(void);
void SayGoodbye(void);
#endif
