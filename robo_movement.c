#include <stdio.h>
 
#define ROBOT       26
#define WALL        27
#define NONE        -1
 
#define MAX_ROWS    80
#define MAX_COLS    80
 
#define EAST         0
#define NORTH        1
#define WEST         2
#define SOUTH        3
 
void scan_state(
                 int *pnrows,
                 int  ncols[MAX_ROWS],
                 int  object[MAX_ROWS][MAX_COLS],
                 int *pdirection
           );
 
void print_state(
                 int nrows,
                 int ncols[MAX_ROWS],
                 int object[MAX_ROWS][MAX_COLS],
                 int direction
            );
 
int main( void )
{
  int nrows;                      // number of rows in environment
  int ncols[MAX_ROWS];            // number of columns in each row
  int object[MAX_ROWS][MAX_COLS]; // object at each location
  int direction;                  // which way the robot is facing
 
void scan_state(
                 int *pnrows,
                 int  ncols[MAX_ROWS],
                 int object[MAX_ROWS][MAX_COLS],
                 int *pdirection
               )
{
  int ch;
  int r,c;
 
  r = 0;
  c = -1;
 
  while (( ch = getchar() ) != '(' ) {
    c++;
    if ( ch == '\n' ) {
      ncols[r++] = c;
      c = -1;
    }
// else if { ...
 
 // ... Not sure what goes in here ...
 
 // }
 
  }
 
 *pnrows = r;
}
 
 
void print_state(
                 int nrows,
                 int ncols[MAX_ROWS],
                 int object[MAX_ROWS][MAX_COLS],
                 int direction
                )
{
  // need help here too plz
}
