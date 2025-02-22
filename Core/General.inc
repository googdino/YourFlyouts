
; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Sec.DirButton:S]
X=((26+5)*[Set.S])r
Y=r
Shape=Rectangle 0,0,26,26,3 | StrokeWidth 0 | Extend Fill | Scale [Set.S],[Set.S],0,0
Shape2=Path Arrow | StrokeWidth (2*[Set.S]) | StrokeStartCap Round | StrokeEndCap Round | Fill Color 0,0,0,1 | Stroke Color #Set.Text_Color# | Scale [Set.S],[Set.S],0,0 | Extend Rotation
Arrow=8,6 | LineTo 18,12 | LineTo 8,18
OverColor=[&Func:returnBool('AniDir', '#CURRENTSECTION#', '#Set.Accent_Color#', '#Set.Text_Color#')],200
LeaveColor=[&Func:returnBool('AniDir', '#CURRENTSECTION#', '#Set.Accent_Color#', '#Set.Text_Color#')],150
LeftMouseUpAction=[!WriteKeyValue Variables AniDir "#CURRENTSECTION#" "#Sec.SaveLocation#"][!UpdateMeasure Auto_Refresh:M][!Refresh]
Fill=Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')],#Set.Alpha#
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'OverColor')],#Set.Alpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')],#Set.Alpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContentContainer
DynamicVariables=1
Hidden=(#Ani# = 0 ? 1 : 0)

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[HotkeysTitle]
Meter=String
Text=Activation
MeterStyle=Set.String:S | Set.OptionCat:S


[Option01]
Meter=String
Text=Timeout duration (seconds)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:322]
Meter=Shape
MeterStyle=Set.Div:S
[Option02]
Meter=String
Text=Activate flyouts when media keys are pressed
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:223]
Meter=Shape
MeterStyle=Set.Div:S
; [Option03]
; Meter=String
; Text=Override native media key functions
; MeterStyle=Set.String:S | Set.OptionName:S
; [Set.Div:224123]
; Meter=Shape
; MeterStyle=Set.Div:S
[Option04]
Meter=String
Text=Activate flyouts with a hotkey
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:22144]
Meter=Shape
MeterStyle=Set.Div:S
[Option05]
Meter=String
Text=Activation hotkey
FontColor=#Set.Text_Color#,(150+105*#OptionalKey#)
MeterStyle=Set.String:S | Set.OptionName:S


[ModuelsTitle]
Meter=String
Text=Modules
MeterStyle=Set.String:S | Set.OptionCat:S

[Option11]
Meter=String
Text=Media & music flyouts
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S12]
Meter=Shape
MeterStyle=Set.Div:S
[Option12]
Meter=String
Text=CapsLock / NumLock / ScrollLock flyouts
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S13]
Meter=Shape
MeterStyle=Set.Div:S

[BrightnessTitle]
Meter=String
Text=Brightness flyouts
MeterStyle=Set.String:S | Set.OptionCat:S
[Option41]
Meter=String
Text=Use brightness flyouts
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S41]
Meter=Shape
MeterStyle=Set.Div:S
[Option42]
Meter=String
Text=Brightness flyouts mode
FontColor=#Set.Text_Color#,(150+105*#BrightnessKeys#)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S431]
Meter=Shape
MeterStyle=Set.Div:S
[Option43]
Meter=String
Text=Hotkey to increase brightness
FontColor=#Set.Text_Color#,(150+105*#BrightnessKeys#)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:2231213]
Meter=Shape
MeterStyle=Set.Div:S
[Option44]
Meter=String
Text=Hotkey to decrease brightness
FontColor=#Set.Text_Color#,(150+105*#BrightnessKeys#)
MeterStyle=Set.String:S | Set.OptionName:S

[FunctionTitle]
Meter=String
Text=Operation
MeterStyle=Set.String:S | Set.OptionCat:S

[Option21]
Meter=String
Text=Smart volume keys - hold shift to change player volume instead of system. Does not show flyout
FontColor=#Set.Text_Color#,(150+105*#Media#)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S12391321]
Meter=Shape
MeterStyle=Set.Div:S
[Option22]
Meter=String
Text=Volume to change when volume key is pressed
MeterStyle=Set.String:S | Set.OptionName:S

[HotkeysTitle3]
Meter=String
Text=Animation
MeterStyle=Set.String:S | Set.OptionCat:S
[Option31]
Meter=String
Text=Slide animations
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S132]
Meter=Shape
MeterStyle=Set.Div:S
[Option32]
Meter=String
Text=Animation easing type
FontColor=#Set.Text_Color#,(#Ani# = 0 ? 150 : 255)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S1343]
Meter=Shape
MeterStyle=Set.Div:S
[Option33]
Meter=String
Text=Animation direction
FontColor=#Set.Text_Color#,(#Ani# = 0 ? 150 : 255)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S21343]
Meter=Shape
MeterStyle=Set.Div:S
[Option34]
Meter=String
Text=Animation steps
FontColor=#Set.Text_Color#,(#Ani# = 0 ? 150 : 255)
MeterStyle=Set.String:S | Set.OptionName:S


; ---------------------------------------------------------------------------- ;
;                                     Input                                    ;
; ---------------------------------------------------------------------------- ;


[Timeout]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Int|1|20
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value01]
Meter=String
Text=#Timeout#
MeterStyle=Set.String:S | Set.Value:S
[MediaKeys]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option02:Y]-#Set.P#+(-20/2+8)*[Set.S])
[OptionalKey]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option04:Y]-#Set.P#+(-20/2+8)*[Set.S])
; ------------------------------- Optional key ------------------------------- ;
[Button05]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option05:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure Func "startSide('Hotkey')"]
Hidden=(1-#OptionalKey#)
[Value05]
Meter=String
Text=#KeyInString#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(1-#OptionalKey#)

[Media]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option11:Y]-#Set.P#+(-20/2+8)*[Set.S])
[Locks]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option12:Y]-#Set.P#+(-20/2+8)*[Set.S])

[BrightnessKeys]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option41:Y]-#Set.P#+(-20/2+8)*[Set.S])
[BrightnessMode:]
Meter=Shape
Shape2=Rectangle ([&Func:returnBool('BrightnessMode', '0')]=0 ? 0 : (150*[Set.S])),0,(150*[Set.S]),(30*[Set.S]),(7*[Set.S]) | Fill Color #Set.Text_Color# | StrokeWidth 0 |
0Act=[!WriteKeyValue Variables BrightnessMode "-1" "#Sec.SaveLocation#"]
1Act=[!WriteKeyValue Variables BrightnessMode "0" "#Sec.SaveLocation#]
MeterStyle=Set.Pick:S
Y=([Option42:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(1-#BrightnessKeys#)
[BrightnessMode:0]
Meter=String
Text=Device
FontColor=[&Func:returnBool('BrightnessMode', '0', '#Set.Text_Color#', '#Set.Pri_color#')]
LeftMouseUpAction=[&Func:GroupVar('#CURRENTSECTION#', '0Act')][!Refresh][!UpdateMeasure Auto_Refresh:M]
MeterStyle=Set.String:S | Set.PickOption_0:S
Hidden=(1-#BrightnessKeys#)
[BrightnessMode:1]
Meter=String
Text=Backlight
FontColor=[&Func:returnBool('BrightnessMode', '0', '#Set.Pri_color#', '#Set.Text_Color#')]
LeftMouseUpAction=[&Func:GroupVar('#CURRENTSECTION#', '1Act')][!Refresh][!UpdateMeasure Auto_Refresh:M]
MeterStyle=Set.String:S | Set.PickOption_1:S
Hidden=(1-#BrightnessKeys#)
; --------------------------------- bright up -------------------------------- ;
[Button43]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option43:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure Func "startSide('Hotkey', '3')"]
Hidden=(1-#BrightnessKeys#)
[Value43]
Meter=String
Text=#Key3InString#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(1-#BrightnessKeys#)
; -------------------------------- bright down ------------------------------- ;
[Button44]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option44:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure Func "startSide('Hotkey', '2')"]
Hidden=(1-#BrightnessKeys#)
[Value44]
Meter=String
Text=#Key2InString#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(1-#BrightnessKeys#)

[SmartVolume]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option21:Y]-#Set.P#+(-20/2+8)*[Set.S])
[MediaKeyChange]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Int|1|20
Y=([Option22:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value22]
Meter=String
Text=#MediaKeyChange#
MeterStyle=Set.String:S | Set.Value:S

[Ani:]
Meter=Shape
0Act=[!WriteKeyValue Variables Ani "0" "#Sec.SaveLocation#"]
1Act=[!WriteKeyValue Variables Ani "1" "#Sec.SaveLocation#"]
2Act=[!WriteKeyValue Variables Ani "2" "#Sec.SaveLocation#"]
MeterStyle=Set.Pick3:S
Shape2=Rectangle (100*[Set.S]*([&Func:returnBool('Ani', '1')]+[&Func:returnBool('Ani', '2')]*2)),0,(300/3*[Set.S]),(30*[Set.S]),(7*[Set.S]) | Fill Color #Set.Text_Color# | StrokeWidth 0
Y=([Option31:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Ani:0]
Meter=String
Text=None
FontColor=[&Func:returnBool('Ani', '0', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_0:S
[Ani:1]
Meter=String
Text=Fast
FontColor=[&Func:returnBool('Ani', '1', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_1:S
[Ani:2]
Meter=String
Text=Fancy
FontColor=[&Func:returnBool('Ani', '2', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_2:S
[Easetype]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option32:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure Func "startSide('Ease')"]
Hidden=(#Ani# = 0 ? 1 : 0)
[Value32]
Meter=String
Text=#Easetype#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(#Ani# = 0 ? 1 : 0)
[Button33]
Meter=Shape
MeterStyle=Set.DropDown:S
Y=([Option33:Y]-#Set.P#+(-30/2+8)*[Set.S])
Leftmouseupaction=[!CommandMeasure Func "startDrop('AniDir', '#CURRENTSECTION#', 'JaxCore', 'AniDir')"]
Hidden=(#Ani# = 0 ? 1 : 0)
[Value33]
Meter=String
Text=From #AniDir#
Hidden=(#Ani# = 0 ? 1 : 0)
MeterStyle=Set.String:S | Set.Value:S
[AniSteps]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Int|10|40
Y=([Option34:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(#Ani# = 0 ? 1 : 0)
[Value34]
Meter=String
Text=#AniSteps#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(#Ani# = 0 ? 1 : 0)

@includeKeys=#SKINSPATH##Skin.Name#\@Resources\Actions\HotKeys.ini
[Variables]
Page.page=1
