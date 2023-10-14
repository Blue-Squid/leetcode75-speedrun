# Set the source files for the 'array' module
set(SOURCES
    addArrays.cpp
)

# Create a library from the source files
add_library(array STATIC ${SOURCES})
