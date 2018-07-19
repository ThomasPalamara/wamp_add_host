#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *f = fopen("D:/wamp64/bin/apache/apache2.4.27/conf/extra/httpd-vhosts.conf", "a");
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

FILE *f2 = fopen("C:/Windows/System32/drivers/etc/hosts", "a");
if (f2 == NULL)
{
    printf("Error opening file 2!\n");
    exit(1);
}



char folder[256];
printf("Folder :");
scanf("%s", folder);

char file[256];
printf("File :");
scanf("%s", file);

char buf[256];
snprintf(buf, sizeof buf, "<VirtualHost *:80>\n\tServerAdmin localhost\n\tDocumentRoot \"D:/wamp64/www/%s/%s\"\n\tServerName %s.local\n\tServerAlias %s.local\n</VirtualHost>\n", folder, file, file, file);
fprintf(f, "%s\n", buf);

char buf2[256];
snprintf(buf2, sizeof buf2, "127.0.0.1       %s.local", file);
fprintf(f2, "%s\n", buf2);


fclose(f);

}
