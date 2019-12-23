cmake_minimum_required (VERSION 2.6)

project (csvcount)

# The version number.
set (affi_VERSION_MAJOR 1)
set (affi_VERSION_MINOR 0)

# sources and headers dir for the main application
set(SOURCE_DIR src)
set(INCLUDE_DIR include)

# sources and headers dir for the test application
set(TEST_DIR tests/test_read_config)

# config file and header for the configuration
set(CONFIG_DIR config)

# the install dir
set(INSTALL_DIR install/usr/local/bin)

# additional includes
include_directories(${INCLUDE_DIR} ${CONFIG_DIR})

# main file will be the master of the opration
# get_config file allows to read the configuration and to choose how to do stuff
# build_configuration will automatically generate the configuration file to be used and will update it whenever it changes
# csv_order file will generate cvs paterns
# binary_order will generate binary counter file

set(TARGET_SOURCES ${SOURCE_DIR}/main.c ${SOURCE_DIR}/get_stats.c ${SOURCE_DIR}/get_config.c ${SOURCE_DIR}/build_configuration.c ${SOURCE_DIR}/csv_order.c ${SOURCE_DIR}/binary_order.c )
set(TEST_SOURCES ${SOURCE_DIR}/main.c ${TEST_DIR}/read_config.c ${TEST_DIR}/run_test.c )
set(HEADER_FILES ${INCLUDE_DIR}/get_stats.h ${INCLUDE_DIR}/get_config.h ${INCLUDE_DIR}/build_configuration.h ${INCLUDE_DIR}/binary_order.h ${CONFIG_DIR}/configuration.h )

add_definitions(-DDEBUG_L1=1)

add_custom_target(tests)
add_executable(csvcount ${TARGET_SOURCES} ${HEADER_FILES})
add_executable(readconfig_test ${TEST_SOURCES})
add_dependencies(tests readconfig_test)
