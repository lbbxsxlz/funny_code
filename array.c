#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#define num 20480

int array[num][num];
int x, y;

void access_by_row()
{
    for (x = 0; x < num; x++) {
        for (y = 0; y < num; y++) {
	    array[x][y] = x + y;
	}
    }
}

void access_by_list()
{
    for (x = 0; x < num; x++) {
        for (y = 0; y < num; y++) {
            array[y][x] = x + y;
        }
    }
}

int main(void)
{
#ifdef ACCESS_ROW
    access_by_row();
#else
    access_by_list();
#endif
}

