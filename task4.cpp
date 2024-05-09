#include <iostream>
#include <cstring>
using namespace std;

class Output {
    static char outbuf[500]; 
    static int inuse; 
    static int oindex; 
    char str[80]; 
    int i; 
    int who; 

public:
    Output(int w, const char *s) {
        strcpy(str, s);
        i = 0;
        who = w;
    }

    int putbuf() {
        if (!str[i]) {
            inuse = 0; 
            return 0;
        }

        if (!inuse) {
            inuse = who; 
        }

        if (inuse != who) {
            outbuf[--oindex] = ' ';
            outbuf[oindex++] = ' ';
            outbuf[oindex++] = ',';
            outbuf[oindex++] = 'W';
            outbuf[oindex++] = '[';

            outbuf[oindex++] = static_cast<char>(who + '0');// припустимо що who це цифра

            outbuf[oindex++] = ']';

            outbuf[oindex++] = '\n';

            return -1; 
        }

        if (str[i]) { 
            outbuf[oindex] = str[i];
            i++;
            oindex++;
            outbuf[oindex++] = ':';
            outbuf[oindex++] = ' ';
            outbuf[oindex++] = 'U';
            outbuf[oindex++] = '[';

            outbuf[oindex++] = static_cast<char>(who + '0');// припустимо що who це цифра

            outbuf[oindex++] = ']';

            outbuf[oindex++] = '\n';

            outbuf[oindex] = '\0'; 
            return 1;
        }

        return 0;
    }

    void show() {
        cout << outbuf << '\n';
    }
};

char Output::outbuf[500]; 
int Output::inuse = 0;
int Output::oindex = 0; 

int main() {
    Output obj1(1, "This is a test"), obj2(2, "of statics");
    while (obj1.putbuf() | obj2.putbuf()); 
    obj1.show();
    return 0;
}