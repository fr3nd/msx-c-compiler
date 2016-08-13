#
# Makefile
# Carles Amigó, 2016-08-13 13:37
#

all:
	@openmsx \
		-ext "Mitsubishi_ML-30DC_ML-30FD" \
		-ext "ram4mb" \
		-machine turbor \
		-diska src \
		-diskb bootdisk \
		-script boot.tcl

clean:
	rm -f src/*.com src/*.mac src/*.rel src/*.sym

# vim:ft=make
#
