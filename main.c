#include "Commands.h"

int main() {
    printf("preparing - 1% \n");
    printf("preparing - 2% \n");
    printf("preparing - 3% \n");
    printf("preparing - 4% \n");
    printf("preparing - 9% \n");
    printf("preparing - 23% \n");
    printf("preparing - 27% \n");
    printf("preparing - 38% \n");
    printf("preparing - 49% \n");
    printf("preparing - 73% \n");
    printf("preparing - 100% \n");
    printf(help);
    char *F = "!#rhhff$";
    char val[10] = "1234567890";
    char *perams;
    FILE *fp;
    const char *name;
        do {


            fp = fopen("file.log", "w");
            printf(">");
            scanf("%s", &val);

            if (strcmp(val, "")==0) {
                printf("Please input something.\n");
            }
            else if (strcmp(val, "mkdir")==0) {
                int ret = 1;
                printf("Making Directory - ");
                    scanf("%s", &name);
                    ret = mkdir(name, 0755);
                    if (ret == 0) {
                        printf("Directory created successfully\n");
                    }
                    else{
                        printf("Error - failed\n");
                    }
                } else if (strcmp(val, "echo")==0) {
                printf("Echoing - \n");
                scanf("%s\n", &perams);
                printf("%s\n", perams);
            } else if (strcmp(val, "LOC")==0) {
                printf("echo\n");
                printf("done\n");
                printf("dir\n");
                printf("ls\n");
                printf("mkdir\n");
                printf("testpy/pytest\n");
                printf("pen\n");
            } else if (strcmp(val, "list")==0) {
                printf("echo\n");
                printf("done\n");
                printf("dir\n");
                printf("ls\n");
                printf("mkdir\n");
                printf("testpy/pytest\n");
                printf("pen\n");
            } else if (strcmp(val, "done")==0) {
                    system("exit");
                }

            else if (strcmp(val, "dir")==0)
            {
                system("dir");
            }
            else if (strcmp(val, "ls")==0)
            {
                system("ls");
            }
            else if (strcmp(val, "textedit")==0){

            }
            else if (strcmp(val, "testpy")==0){
                system("python3.8 ../stalker.py");
            }
            else if (strcmp(val, "pytest")==0){
                system("python3.8 ../stalker.py");
            }
            else {
                printf("Command not found\n");
                printf("Type list for list of commands\n");
                putc(val[0], fp);
                fclose(fp);
            }

        } while (val[9] != F);
    return 0;
}
