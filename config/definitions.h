#define COL 0
#define NAV 1
#define SYM 2
#define NUM 3
#define COLW 4
#define NAVW 5
#define SYMW 6
#define NUMW 7
#define MISC 8

#define SK(KEY) &nk KEY KEY
#define MO(LAYER) &mo_tap LAYER F24
// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000
