#include <stdio.h>
#include <string.h>
#include <gd.h>

int main()
{
    gdImagePtr graph;
    FILE *png_file;

    int black;

    //graph = gdImageCreate(70, 70);
    //black = gdImageColorAllocate(graph, 0, 0, 0);

    png_file = fopen("test.png", "wb");

    //gdImagePng(graph, png_file);
    fclose(png_file);

    //gdImageDestroy(graph);
    return 0;
}
