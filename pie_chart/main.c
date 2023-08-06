#include <stdio.h>
#include <string.h>
#include "gd.h"
#include <gdfonts.h>
#include <math.h>

gdImagePtr chart;
int black;
int white;
int yellow;
int navy;
int green;
int red;
int grey;

void create_chart(gdImagePtr chart)
{

    FILE *png_file;

    white = gdImageColorAllocate(chart, 255, 255, 255);

    black = gdImageColorAllocate(chart, 0, 0, 0);
    yellow = gdImageColorAllocate(chart, 255, 178, 0);
    green = gdImageColorAllocate(chart, 110, 178, 0);
    grey = gdImageColorAllocate(chart, 130, 130, 130);
    navy = gdImageColorAllocate(chart, 0, 42, 111);
    red = gdImageColorAllocate(chart, 255, 0, 0);

    //gdImageFilledArc(chart, 250, 250, 250, 250, 0, 88, yellow, gdPie);
    //gdImageArc(chart, 250, 250, 250, 250, 0, 88, black);

    //gdImageFilledArc(chart, 250, 250, 250, 250, 88, 91, navy, gdPie);
    //gdImageFillToBorder(chart, 88, 250, 12, black);

    //gdImageFilledArc(chart, 250, 250, 250, 250, 91, 120, grey, gdPie);
    //gdImageArc(chart, 250, 250, 250, 250, 91, 120, black);

    //gdImageFilledArc(chart, 250, 250, 250, 250, 120, 180 , green, gdPie);
    //gdImageArc(chart, 250, 250, 250, 250, 120, 180, black);

    //gdImageFilledArc(chart, 250, 250, 250, 250, 180, 360, red, gdPie);
    //gdImageArc(chart, 250, 250, 250, 250, 180, 360, black);

    //gdImageLine(chart, 250, 250, 375, 250, black);
    //gdImageLine(chart, 250, 250, 250+4, 375, black);

    gdImageSetAntiAliased(chart, gdTrueColorAlpha(255, 0, gdBlueMax, gdAlphaOpaque));

    //gdImageString(chart, gdFontSmall, 250, 250, "blaise", black);
    //gdImageString(chart, gdFontSmall, 285+40, 285+40, "balaise", black);
    //gdImageString(chart, gdFontSmall, 285+90, 285+90, "le blaise", black);

    //gdImageDashedLine();
    //chart = gdImageScale(chart, 500, 500);

    png_file = fopen("test.png", "wb");

    gdImagePng(chart, png_file);
    fclose(png_file);

    gdImageDestroy(chart);
}

void set_chart_value(char *name, char *percentage)
{
    int n;
    int x = 0;
    int y;

    chart = gdImageCreate(500, 500);
    int perc = *((int*)percentage);
    y = (perc*360)/100;

    // add system to change colors
    gdImageFilledArc(chart, 250, 250, 250, 250, x, y, navy, gdPie);
    gdImageArc(chart, 250, 250, 250, 250, 0, 360, black);
    x = y;
    printf("%s \n", percentage);
    create_chart(chart);

}

int user_choice(int argc, char *argv[])
{
    const char *separators = " ";
    //char *name_arg = strtok(argv[1], separators);
    char *perc_arg = strtok(argv[2], separators);
    //char *color_arg = strtok(argv[3], separators);

    char *name_arg = "4";

    while(perc_arg != NULL){
        set_chart_value(name_arg, perc_arg);
        perc_arg = strtok(NULL, separators);

        //name_arg = strtok(NULL, separators);
    }

    return 0;
}



int main(int argc, char *argv[])
{
    printf("---------- Pie Chart ---------- \n");
    if(argc < 2)
            printf("Please enter arguments to generate a chart \n");
    else
        user_choice(argc, argv);
    return 0;
}
