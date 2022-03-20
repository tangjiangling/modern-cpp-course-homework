set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)

install(FILES ${PROJECT_SOURCE_DIR}/results/lib/libipb_arithmetic.a DESTINATION lib)
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include DESTINATION include)

# create library "libipb_arithmetic"
# add_library(ipb_arithmetic subtract.cpp sum.cpp)

# find ipb_arithmetic library
find_library(IPB_ARITHMETIC NAMES ipb_arithmetic PATHS ${LIBRARY_OUTPUT_PATH})

# add executable main
add_executable(test_ipb_arithmetic main.cpp)

# tell the linker to bind these objects together
# target_link_libraries(test_ipb_arithmetic ipb_arithmetic)
target_link_libraries(test_ipb_arithmetic ${IPB_ARITHMETIC})
