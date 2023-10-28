prepare:
	rm -rf build
	mkdir build
	cd build && \
	cmake .. && \
	cmake --build . #--target smartphone_lib