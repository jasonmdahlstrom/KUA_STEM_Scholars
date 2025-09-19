# KUA STEM Scholars

I look forward to meeting all of you!  I have a few stories to tell, a few thoughts to share, and I want to spend as much time as we can answering your questions.  I also want to have some fun with hardware along the way.  

In preparation for this, before we meet, please complete the following three activities if you are able to.  Do not stress about it if you are not able to.  We can sort it out when we meet or you can work with someone else.  Click the triangle to the left of each item below to expand the section:

<details>
  <summary>Install the Arduino Integrated Development Environment ("IDE") before we meet:</summary>

You can download the Arduino IDE from the following link:

https://www.arduino.cc/en/software/

After installing launch the Arduino IDE ("Integrated Development Environment").  It will take a while to open the first time you launch it.  The IDE downloads and installs additional software the first time it launches.  This is not unusual.

The installation process may (depending on your operating system... windows... osx... etc...) ask to install "device software" or "drivers."  Please install these as well:

![Install Drivers Dialog](images/Arduino_Install_Drivers.png)

When all of the installation processes complete your IDE window should resemble the following (the text displayed in your "Output" window may be different):

![IDE After Installation](images/Arduino_Installed_Default_Launch.png)
</details>

<details>
  <summary>Create an Ardino code project - also called a "sketch"</summary>

Open the Arduino IDE if it is not still / already open.

Click on the "Select Board" drop down menu and click on "Select other board and port...":

![IDE Select Board](images/Arduino_IDE_Select_Board.png)

Scroll down the Boards list until you find "Arduino Nano" and click on it to select it.  A checkmark will appear to the right of the label.  You do not need to select any "PORTS" at this time.  Click the "OK" button.

![IDE Nano Board Selection](images/IDE_Select_Board_Nano.png)

The top section of the IDE is the code editor.  Replace the code in the code editor window with the following:

```
// The setup function runs once when the board is powered or reset
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the built-in LED pin as an output
}

// The loop function runs repeatedly
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on
  delay(1000); // Wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED off
  delay(1000); // Wait for 1 second
}
```

Your IDE window should resemble the following:

![IDE Code Editor](images/IDE_Code_Editor_Pane.png)

Then click on the "File" menu button and select "Save As":

![IDE Save As](images/IDE_Save_As.png)

Arduino code projects are referred to as "sketches."  Save your sketch as "blinky"  You can save this file wherever you like - just be sure you can find it again when we meet!:

![IDE Save As Blinky](images/IDE_Save_As_Blinky.png)

The tab at the top of your editor window should update with the new name for your sketch.  Sketch files end with the text ".ino":

![IDE Blinky Sketch](images/IDE_Blinky_Sketch_Name.png)

</details>

<details>
  <summary>Verify your sketch</summary>

Click on the checkmark icon above the code editor to verify your sketch.  

![IDE Compile](images/IDE_Verify_Sketch.png)

This will run a tool ("compiler") that converts your code into an executable image ("firmware") that can run on the board (the Ardunio Nano) you selected when we created the sketch:

![IDE Compiling](images/IDE_Verifying.png)

If the verification ("compilation") process is successful the output area of your IDE should display some information about the firmware you just compiled:

![IDE Compiled](images/IDE_Verified.png)

My output, above, is telling me that the size of my program's executable code - the instructions that the microcontroller's processor will run - is 924 bytes... using up 3% of my microcontroller's available storage space for the executable code.  It is also telling me that my program needs 9 bytes, or "less than 1%" of my microcontroller's available memory.  

If your output does not resemble mine check that the code in your code editor is *identical* to the code in the "Create an Arduino code project" section above and try again.  If this still does not work do not worry, we will fix it when we meet.
</details>

<br>

When we meet, please bring your laptop (*fully charged*) so you can upload and run this sketch on your own hardware (which I will bring) as a starting point for additional hardware experiments!

The other thing I would like to ask of you, before we meet, is a few sentences telling me something about your STEM interests... what inspires you in the field of STEM?  

Please use my Dartmouth e-mail address, jason.m.dahlstrom@dartmouth.edu, and please include "KUA Stem Scholar" in the subject line so I am sure to read it before we meet.

Thanks for your time ahead of our seminar, and again, I look forward to meeting you!

-Jason

