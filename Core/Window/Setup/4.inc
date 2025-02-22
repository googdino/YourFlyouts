[Header.Image]
Y=(50*[S])
X=(#W#/2-160*[S]/2)
H=(160*[S])
W=(160*[S])

[Header.String]
X=(160*[S]/2)r
Text=Brightness flyouts

[Description.String]
Text=By pressing Win + 0 / 9, flyouts can change brightness levels regardless of your device.#CRLF#These hotkeys can be configured in the settings.#CRLF#Which brightness flyout mode do you want to use?
InlinePattern=Win \+ 0 / 9|brightness flyout mode

[Box.1.Shape]
Meter=Shape
X=(#W#/2-(940*[S])/2)
Y=R
LeftMouseUpAction=[!WriteKeyValue Variables BrightnessKeys "1" "#SKINSPATH#YourFlyouts\@Resources\Vars.inc"][!WriteKeyValue Variables BrightnessMode "-1" "#SKINSPATH#YourFlyouts\@Resources\Vars.inc"][!WriteKeyValue Variables Sec.arg2 "5" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Box.Shape:S
[Box.1.String]
Meter=String
Text=Hardware#CRLF#Changes built-in monitor's brightness. Use this if your device is a laptop
MeterStyle=Sec.String:S | Box.String:S

[Box.2.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyValue Variables BrightnessKeys "1" "#SKINSPATH#YourFlyouts\@Resources\Vars.inc"][!WriteKeyValue Variables BrightnessMode "0" "#SKINSPATH#YourFlyouts\@Resources\Vars.inc"][!WriteKeyValue Variables Sec.arg2 "5" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Box.Shape:S
[Box.2.String]
Meter=String
Text=Backlight#CRLF#Works for all monitors, does not change hardware brightness. Use this if your device is a PC
MeterStyle=Sec.String:S | Box.String:S

[Box.3.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyValue Variables BrightnessKeys "0" "#SKINSPATH#YourFlyouts\@Resources\Vars.inc"][!WriteKeyValue Variables Sec.arg2 "5" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Box.Shape:S
[Box.3.String]
Meter=String
Text=None#CRLF#Does not integrate a brightness flyout.
MeterStyle=Sec.String:S | Box.String:S