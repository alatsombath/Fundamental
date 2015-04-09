[Variables]

; Refresh the skin after updating these settings!


; DISPLAY
; =======

Bands=96
; Number of bars

Color=161,186,220,255

BarWidth=14
BarHeight=(#WORKAREAHEIGHT#/2)
; "#WORKAREAHEIGHT#" is generally your monitor's height
; http://docs.rainmeter.net/manual-beta/variables/built-in-variables#WORKAREAXYWH

BarGapX=3.5

Flip=0
; Flip the bars upside down


; AUDIO
; =====

Sensitivity=42
; Increase this if the spectrum is not visible enough

FFTAttack=350
FFTDecay=350
; Decrease for faster response, increase for slower response
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTAttack

FFTSize=2048
; Increase this if the bars "stick" together too much

FFTOverlap=(#FFTSize#/2)
FreqMin=40
FreqMax=16000
Port=Output
; Additional audio settings
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTOptions
