#   -*- mode: shell-script; -*-
#The definitions here are used by all window managers that !include menu.h.
#This way, you can set your preferences (like whether to use xterm/rxvt,
#how long do you want your menu titles, etc) for all window-managers.
#
#This file is part of the menu package (version 1.4 and higher).
#For more information, see /usr/share/doc/menu/html

#If you prefer long titles, change the definition below accordingly.

function title()=$title

#function title()=ifelse($longtitle,$longtitle,$title)

#If you don't like to see the icons, (un)comment (out) the lines below:
function icon()=ifelse($icon32x32, $icon32x32, \
                  ifelse($icon16x16, $icon16x16, $icon))
#function icon()= ""

#Define the X terminal emulator to use for text apps under X11.
#The following use the x-terminal-emulator alternative.
 
function term()=\
    "x-terminal-emulator " ifnempty($visible,"-ut") \
        ifnempty($geometry,"-geometry ") $geometry \
        " -T \"" esc(title(),"\\\"") "\"" \
        " -e sh -c \"" esc($command,"\\\"") "\""

#The above is more correct but unfortunately, some menu-methods 
#do not support ''.
        
#function term()=\
#    "x-terminal-emulator " ifnempty($visible,"-ut") \
#        ifnempty($geometry,"-geometry ") $geometry \
#        " -T '" escwith(title(),"'","'\\'") \ 
#        "' -e sh -c '" escwith($command,"'","'\\'") "'"

#Examples:
#Use a specially cooked xterm instead:
#function term()=\
#    "xterm -sb -sl 500 -j -ls -fn 7x14 -geometry 80x30"\
#        " -T '" escwith(title(),"'","'\\'") \
#        "' -e sh -c '" escwith($command,"'","'\\'") "'"
 
#Force use of  rxvt:
#function term()=\
#    "rxvt " ifnempty($visible,"-ut") \
#        ifnempty($geometry,"-geometry ") $geometry \
#        " -T '" escwith(title(),"'","'\\'") \
#        "' -e sh -c '" escwith($command,"'","'\\'") "'"
        


# This sort menu entry case-insensitively.
sort=$sort ":" tolower(title())
  
#If you want your submenus to come before the commands themselves
#in the menus (in case of mixed menus):
#
#sort=$sort ":" ifelse($command, "1", "0" ) ":" title()

#Activate menu section translations:
outputlanguage="LOCALE"
#menu-methods need to set 'outputencoding' before translations are really
#enabled.


#The following is for the hints (or optimised tree structure):
# (For more info on these variables, see /usr/share/doc/menu/*)

#If you want menu to optimize the tree, set this to true:
hint_optimize=false
#for more info on the other variables, see /usr/share/doc/menu/
#hint_nentry=6
#hint_topnentry=4
#hint_mixedpenalty=15
#
#The variables below are only useful if you want to speedup
#the finding of the best tree.
#hint_minhintfreq=0.1
#hint_mlpenalty=2000
#hint_max_ntry=4
#hint_max_iter_hint=5
#hint_debug=false


forcetree
#Due to the existance of both /Apps/System and /System,
#menu gets confused. So, force /System in it's own section
  System
endforcetree
