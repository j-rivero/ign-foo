cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

#============================================================================
# Initialize the project
#============================================================================
project(ignition-foo VERSION 0.0.1)

#============================================================================
# Find ignition-cmake
#============================================================================
# If you get an error at this line, you need to install ignition-cmake
find_package(ignition-cmake2 2.0.0 REQUIRED)

#============================================================================
# Configure the project
#============================================================================
set(c++standard 17)
ign_configure_project(VERSION_SUFFIX)
ign_configure_build(QUIT_IF_BUILD_ERRORS
    COMPONENTS staging)

#============================================================================
# Create package information
#============================================================================
ign_create_packages()
