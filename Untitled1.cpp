#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set the color for drawing the door frame
    setcolor(BROWN);

    // Draw the door frame
    rectangle(100, 100, 300, 400);

    // Draw the rounded door frame depth
    arc(100, 110, 180, 270, 10); // Top-left corner
    arc(100, 390, 90, 180, 10); // Bottom-left corner
    arc(300, 110, 270, 360, 10); // Top-right corner
    arc(300, 390, 0, 90, 10); // Bottom-right corner

    // Draw the door sill
    line(90, 400, 310, 400);

    // Set the color for drawing the door panels
    setcolor(LIGHTGRAY);

    // Draw the door panel
    line(150, 100, 150, 400);
    line(250, 100, 250, 400);

    // Draw the horizontal panels on the door
    line(100, 200, 300, 200);
    line(100, 300, 300, 300);

    // Add texture to the door panel
    setlinestyle(DASHED_LINE, 0, 3);
    setcolor(DARKGRAY);
    line(155, 105, 245, 395);
    line(155, 395, 245, 105);

    // Draw the door handle
    setcolor(YELLOW);
    circle(280, 300, 10);

    // Draw the door knob
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(280, 300, 5, 10);

    // Draw the door hinges
    setcolor(BLACK);
    rectangle(110, 150, 130, 170);
    rectangle(110, 330, 130, 350);

    // Draw the door frame decorations
    setlinestyle(DASHED_LINE, 0, 3);
    line(90, 110, 310, 110);
    line(90, 390, 310, 390);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
