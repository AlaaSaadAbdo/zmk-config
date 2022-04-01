#define COL 0
#define COLW 1
#define NAV 2
#define NAVW 3
#define SYM 4
#define NUM 5
#define MISC 6

#define SK(KEY) &nk KEY KEY
#define MO(LAYER) &mo_tap LAYER F24
// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000
