#include <stdio.h>
#include <string.h>
#include <gd.h>

int user_choice(int argc, char *argv[])
{
    if(argc==1)
        printf("Please enter arguments to generate a chart \n");
    else
        printf("%s", argv[1]);
    return 0;
}

void create_chart()
{
    //gdImagePtr chart;
    //FILE *png_file;

    //int black;

    //mettre en option le fond'écran de l'image

    //graph = gdImageCreate(70, 70);
    //black = gdImageColorAllocate(graph, 0, 0, 0);

    //png_file = fopen("test.png", "wb");

    //gdImagePng(graph, png_file);
    //fclose(png_file);

    //gdImageDestroy(graph);
}


int main(int argc, char *argv[])
{
    printf("---------- Pie Chart ---------- \n");
    user_choice(argc, argv);
    create_chart();
    return 0;
}
