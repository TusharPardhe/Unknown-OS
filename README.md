# UnknownOS

![](/images/Screenshot_5.png)

UnknownOS is a 64 bit Ubuntu derivative distro which uses fewer resources and is energy efficient with minimal graphics requirement and low ram usage. You’ll get a powerful File Explorer (Nautilus), Vlc Media Player, Tor, VirtualBox and much more with minimilastic design and Openbox desktop manager which makes it highly customizable and fast. All the commands are similar to any other Ubuntu derivative distro like touch,cat,grep,git etc. Xcompmgr is used as composite manager as it uses less resources and is very light.It also comes with pre-installed Grub-Menu customizer through which one can customize their Grub Menu and a lot of more fun and efficient applications to personalize your system and learn working with linux.


## Key Features

It uses **apt** as a package manager so all the repositories are available for the user to install the required application packages.
All the commands that are used in Ubuntu are available to get your hands dirty and work more (well yeah it's not Windows).
Synaptic package manager pre-installed from which you can browse through the whole bunch of available applications.

Details of few packages are as follows :


* **Text Editors**

1. [Vim](https://en.wikipedia.org/wiki/Vim_text_editor)

2. [Nano](https://en.wikipedia.org/wiki/GNU_nano)

3. [Gedit](https://en.wikipedia.org/wiki/Gedit)

* **Web Browsers**

1. [Firefox](https://www.mozilla.org/en-US/firefox/new/)
One of the fastest and stable web browser with lots of customizability options and plug-ins.

2. [Tor Browser](https://www.torproject.org/projects/torbrowser.html.en)
Widely used for anonymous web browsing.

* **Media Player**

1. [Vlc Media Player](https://www.videolan.org/vlc/index.html)
VLC is a free and open source cross-platform multimedia player and framework that plays most multimedia files as well as DVDs, Audio CDs, VCDs, and various streaming protocols. 

2. [RhytmBox](https://wiki.gnome.org/Apps/Rhythmbox)
Rhythmbox is an audio player that plays and helps organize digital audio. Rhythmbox is free software, designed to work well under the GNOME desktop using the GStreamer media framework.

* **Photo Editors**

1. [Gimp](https://www.gimp.org/)
A very popular linux photo editor prefered by most of the users throughout the community.

2. [Inkscape](https://inkscape.org/en/)
Familiar with vectors ? Get your hands coloful with inkscape.

3. [Pinta](https://pinta-project.com/pintaproject/pinta/)
Pinta is a free, open source program for drawing and image editing.

* **Games**

Although games are not what one expects to be pre-installed in a linux distro but still they are little time burners

1. Chess
2. Four-In-A-Row
3. Hitori
4. Lights Off
5. Mahjongg
6. Mines
7. Nibbles
8. Klotski
9. Sudoku 
And many more...

* **Libre Office** 
LibreOffice is a powerful office suite – its clean interface and feature-rich tools help you unleash your creativity and enhance your productivity.
LibreOffice includes several applications that make it the most powerful Free and Open Source office suite on the market.[Read More](https://www.libreoffice.org/)

* **Transmission**
A lightweight GUI bittorent client. Download your torrents easily. [Read more](https://transmissionbt.com/)

* **Bleachbit**
Used to clean system junk files and cached memory of installed applications. [Read more](https://www.bleachbit.org/)

* **Albert**
Albert is a desktop agnostic launcher. Its goals are usability and beauty,performance and extensibility. It is written in C++ and based on the Qt framework. Just press **Win+S** and see the magic yourself.**Note**- At the first start click the small setting icon at the right corner and in extensions tick all the required actions to perform.[Read More](https://github.com/albertlauncher/albert)

* **Nitrogen** 
Nitrogen is a background browser and setter. It is written in C++ using the gtkmm toolkit. It can be used in two modes: browser and recall. Nitrogen has been in development for over 11 years, due to real life and laziness. For more info, check out.[Read More](http://projects.l3ib.org/nitrogen/)

* **Macchange-gtk**
A GUI based software cause not everyone is familiar with terminal. It is used for [MAC SPOOFING](https://en.wikipedia.org/wiki/MAC_spoofing) although MAC address spoofing is not illegal, its practice has caused controversy in some cases.Just type in macchanger-gtk in terminal and the rest is GUI

#### And Many Other useful applications to scratch your head on and customize your computer the way you want to. Or should I say I'm a bit lazy to write description of each one of them seperately. Well.. just explore yourself.

## Getting Started 

Before we begin with the process of installation the **Recommended Minimun System** requirnments to install the system with ease are

* 2 Gib RAM (system memory)
* 10 GB Hard-drive space
* Either a CD/DVD or a USB stick for installation
* Software to Create LiveCD 

Before installing the system on your main machine or virtualBox environment simply boot up the LiveCD/DVD and check whether the hardware works.

## Prerequisites

You should first download the .iso file on your current operating system and should have a CD/DVD or an Usb Stick to create a bootable environment.
For example: [Rufus](https://rufus.akeo.ie/) is used for Windows.

![](/images/Screenshot_13.png)
![](/images/Screenshot_14.png)
![](/images/Screenshot_15.png)

## Installing 

1. Boot Up your LiveCD/DVD
2. A Grub menu will pop-up selct the first option (This will boot up the live .iso)
3. Default Login Details 
       Username : unknown
       Password : " " (A single space)
4. Open terminal and type in **sudo nautilus** (This command runs your file browser as root) 
5. Go to Desktop and click Install UNKNOWNOS
6. Choose the desired options.
7. Choose the drive on which you want the os to be installed on.The process is beautifully explained [here](https://www.tecmint.com/install-ubuntu-16-04-alongside-with-windows-10-or-8-in-dual-boot/)
8. After the installation is complete reboot your system and remove the USB.(You have to press enter while on the black screen)
9. In Grub Menu choose the first option to boot up the system.
10. Login with your credentials.
11. Now clean all the junk system files and cached memory by opening terminal and typing command **sudo bleachbit**. Select the desired options and clean.

### YOU ARE ALL SET TO GO AND EXPLORE THE FEATURES. 
#### FEEL FREE TO REPORT BUGS AND ERRORS (JUST LIKE EVERY OTHER DEVELOPER SAYS)

## Built With

* Ubuntu 16.04 LTS "Xenial Xerus" (As it's very stable and the community around is very helpful) [Read More](https://help.ubuntu.com/community/Installation/MinimalCD)
* [Openbox](http://openbox.org/wiki/Main_Page) 
* [pmenu](https://gitlab.com/o9000/pmenu.git)

And many other open source projects that I might have forgot (I'll add them as I remember) and a lot of brain cells indeed.

## Acknowledgments

Thanks to all the developers whose code I used and the Ubuntu community for helping me throughout the process and sparking my intrest in understanding every basic of Linux kernel.

## Just A Little More

If you want to develop your own linux distro first start with basic commands and do go through books like [LFS](http://www.linuxfromscratch.org/lfs/) and [BLFS](http://www.linuxfromscratch.org/blfs/) thoroughly.Practice as you go and times you will fail but push yourself till you achieve what you planned for.
Feel free to share your thoughts and ask any questions.

