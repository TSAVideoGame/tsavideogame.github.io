#ifndef JIN_GLOBALS_H
#define JIN_GLOBALS_H

/*
 * GLOBALS
 *
 * Really these are more like singletons
 */

extern struct JIN_Resm   JIN_resm;
extern struct STM_Stack  JIN_states;
extern struct JIN_Window JIN_window;
extern struct JIN_Sndbgm JIN_sndbgm;
extern struct JIN_Input  JIN_input;

#define WINDOW_WIDTH  960
#define WINDOW_HEIGHT 640

#endif
