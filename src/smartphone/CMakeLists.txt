set(LIBRARY_SOURCES "smartphone.cpp")
set(LIBRARY_HEADERS "smartphone.hpp")


add_library(${SMARTPHONE_LIB} STATIC ${LIBRARY_SOURCES} ${LIBRARY_HEADERS}) 
target_include_directories(${SMARTPHONE_LIB} PUBLIC
"./")