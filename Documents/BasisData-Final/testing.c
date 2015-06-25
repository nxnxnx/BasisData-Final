
#include "/usr/include/mysql/mysql.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



#define WRITE(f) freopen(f,"w",stdout)


int main() {
   MYSQL *conn;
   MYSQL_RES *res;
   MYSQL_ROW row;
   // WRITE("rata-rata_ipk.txt");
   char *server = "localhost";
   char *user = "root";
   //char *password = ""; ISI PASSWORD MYSQL DISINI <<<
   char *database = "db_akhir";
   conn = mysql_init(NULL);
   
   /* Connect to database */
   if (!mysql_real_connect(conn, server,           //password salah  
         user, password, database, 0, NULL, 0)) {           
      fprintf(stderr, "%s\n", mysql_error(conn));        
      exit(1);                                           
   }
   else //password benar
     {
       //main menu
       // main_menu(conn);
       mysql_close(conn);
       exit(1);
     }
  return 0;
}//end main
