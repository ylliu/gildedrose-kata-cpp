project(gilded_rose_kata_lib)


set(HEADER_FILES
        GildedRose.h
        )

set(SOURCE_FILES
        GildedRose.cpp
        )

add_library(gilded_rose_kata_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
