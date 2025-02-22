; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Variables]
Sec.SaveLocation=#SKINSPATH#YourFlyouts\Main\Vars\Center.inc
Sec.SaveLocation2=#SKINSPATH#YourFlyouts\Main\Vars\Fluent.inc

[MeasureSysInfo]
Measure=SysInfo
Sysinfotype=OS_VERSION
IfMatch=11
IfMatchAction=[!WriteKeyValue Variables "BlurCorner" "Round" "#Sec.Savelocation#"][!WriteKeyValue Variables "BlurCorner" "Round" "#Sec.Savelocation2#"]
IfNotMatchAction=[!WriteKeyValue Variables "BlurCorner" "None" "#Sec.Savelocation#"][!WriteKeyValue Variables "BlurCorner" "None" "#Sec.Savelocation2#"]

; ---------------------------------------------------------------------------- ;
;                                    content                                   ;
; ---------------------------------------------------------------------------- ;

[Description.String]
Text=Welcome to YourFlyouts!

[Button.1.Shape]
Meter=Shape
X=(#W#/2-300*[S]/2)
Y=(#Set.P#)R
LeftMouseUpAction=[!WriteKeyValue Variables Sec.arg2 "2" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Pos_Button.Shape:S
[Button.1.String]
Meter=String
Text=Let's go!
MeterStyle=Sec.String:S | Button.String:S