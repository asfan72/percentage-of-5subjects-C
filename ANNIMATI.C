 #include <graphics.h>
 #include <stdio.h>
 #include<conio.h>
 //Driver code
 void main()
 {
	int gd = DETECT, gm, i, a;

	//Path of the program
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	// Move the cycle
	for (i = 0; i < 600; i++)
	 {
		// Upper body of cycle
		line(50 + i, 405, 100 + i, 405);
		line(75 + i, 375, 125 + i, 375);
		line(50 + i, 405, 75 + i, 375);
		line(100 + i, 405, 125 + i, 375);
		line(150 + i, 405, 100 + i, 345);
		line(75 + i, 370, 75 + i, 375);
		line(70 + i, 370, 80 + i, 370);
		line(80 + i, 345, 100 + i, 345);

		//Wheel
		circle(150 + i, 405, 30);
		circle(50 + i, 405, 30);

		//Road
		line(0, 436, getmaxx(), 436);

		//Stone
		rectangle(getmaxx() - i, 436,
			  650 - i, 431);
		  //Stop the screen for 10 secs
		  delay(10);

		//Clear the screen
		cleardevice();
	}
	getch();

 }