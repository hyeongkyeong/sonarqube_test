#include <string.h>

void func(void);

typedef struct sDATA {
        int m_List[14][2];
        int m_Cursor;
} DATA;
DATA g_A;
int main() {
        while(1){
               func();
        }
}
void func(void) {
        int nCursor;
        int i, j, k, l;
        memset(&g_A.m_List[0][0], 0, sizeof(g_A.m_List));

        nCursor = g_A.m_Cursor;
        for (i = 0; i < 5; i++) {
               j = (nCursor + i) % 14;
               g_A.m_Cursor += 1;
               // g_A.m_Cursor=(j+1)%14;
        }

        k = g_A.m_List[j][0];
        l = g_A.m_List[j][1];

}
