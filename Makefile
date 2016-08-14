
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
