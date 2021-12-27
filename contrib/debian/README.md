
Debian
====================
This directory contains files used to package bokkcoind/bokkcoin-qt
for Debian-based Linux systems. If you compile bokkcoind/bokkcoin-qt yourself, there are some useful files here.

## bokkcoin: URI support ##


bokkcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bokkcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bokkcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/bokkcoin128.png` to `/usr/share/pixmaps`

bokkcoin-qt.protocol (KDE)

