
Debian
====================
This directory contains files used to package velumd/velum-qt
for Debian-based Linux systems. If you compile velumd/velum-qt yourself, there are some useful files here.

## velum: URI support ##


velum-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install velum-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your velum-qt binary to `/usr/bin`
and the `../../share/pixmaps/velum128.png` to `/usr/share/pixmaps`

velum-qt.protocol (KDE)

